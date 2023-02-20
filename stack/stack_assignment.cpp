#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    void push(int data) {
        elements.push_back(data);
    }
    
    void pop() {
        elements.pop_back();
    }
    
    int top() {
        return elements.back();
    }
    
    int operator[](int index) {
        return elements[index];
    }
    
    int size() {
        return elements.size();
    }

private:
    vector<int> elements;
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    
    cout << stack[1] << endl; 
    
    return 0;
}
