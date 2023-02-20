#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack
{
private:
    stack<T> s;

public:
    void push(T data)
    {
        s.push(data);
    }
    T pop()
    {
        T data = s.top();
        s.pop();
        return data;
    }
    T top() { 
        return s.top(); 
        
        }
    bool is_empty() { 
        
        return s.empty();
         }
};

int main()
{
    Stack<char> char_stack;
    char_stack.push('a');
    char_stack.push('b');

    Stack<int> int_stack;
    int_stack.push(1);
    int_stack.push(2);

    Stack<double> double_stack;
    double_stack.push(1.5);
    double_stack.push(2.5);

cout << " char stack: " << char_stack.top() <<endl;
cout << "int stack: " << int_stack.top() <<endl;
cout << " double stack: " << double_stack.top() <<endl;

    return 0;
}
