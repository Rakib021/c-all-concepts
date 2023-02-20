#include <bits/stdc++.h>
using namespace std;
int functionForOperator(char op);
int func(int a, int b, char op);
int func2(string arr);

int main()
{
	string arr;
	cout << "Enter  numbers: ";
	getline(cin, arr);
	cout << "Result: " << func2(arr) << "\n";
	return 0;
}
int functionForOperator(char op) {
	if (op == '+' || op == '-')
    	return 1;
	if (op == '*' || op == '/')
    	return 2;
	return 0;
}
int func(int a, int b, char op) {
	switch (op) {
    	case '+': return a + b;
    	case '-': return a - b;
    	case '*': return a * b;
    	case '/': return a / b;
	}
	return 0;
}

int func2(string arr) {
	stack<int> values;
	stack<char> ops;
    
	for (int i = 0; i < arr.length(); i++) {
    	if (arr[i] == ' ') continue;
   	 
    	if (arr[i] >= '0' && arr[i] <= '9') {
        	int num = 0;
        	while (i < arr.length() && arr[i] >= '0' && arr[i] <= '9') {
            	num = (num * 10) + (arr[i] - '0');
            	i++;
        	}
        	i--;
        	values.push(num);
    	} else if (arr[i] == '(') {
        	ops.push(arr[i]);
    	} else if (arr[i] == ')') {
        	while (ops.top() != '(') {
            	int a = values.top();
            	values.pop();
            	int b = values.top();
            	values.pop();
            	char op = ops.top();
            	ops.pop();
            	values.push(func(b, a, op));
        	}
        	ops.pop();
    	} else {
        	while (!ops.empty() && functionForOperator(ops.top()) >= functionForOperator(arr[i])) {
            	int a = values.top();
            	values.pop();
            	int b = values.top();
            	values.pop();
            	char op = ops.top();
            	ops.pop();
            	values.push(func(b, a, op));
        	}
        	ops.push(arr[i]);
    	}
	}
    
	while (!ops.empty()) {
    	int a = values.top();
    	values.pop();
    	int b = values.top();
    	values.pop();
    	char op = ops.top();
    	ops.pop();
    	values.push(func(b, a, op));
	}
    
	return values.top();
}
