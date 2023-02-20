#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct Node
{
    T data;
    Node<T> *next;

    Node(const T &val) : data(val), next(nullptr) {}
};

template <typename T>
class Stack
{
public:
    Stack() : head_(nullptr) {}

    void push(const T &val)
    {
        Node<T> *node = new Node<T>(val);
        node->next = head_;
        head_ = node;
    }

    void pop()
    {
        if (head_ == nullptr)
            return;
        Node<T> *node = head_;
        head_ = head_->next;
        delete node;
    }

    T top() const
    {
        return head_->data;
    }

    bool empty() const
    {
        return head_ == nullptr;
    }

private:
    Node<T> *head_;
};

int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << "\n";
        s.pop();
    }

    return 0;
}
