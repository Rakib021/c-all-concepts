#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Queue {
 public:
  Queue() {}

  void enqueue(const T &value) {
    data.push_back(value);
  }

  void dequeue() {
    data.erase(data.begin());
  }

  T front() const {
    return data.front();
  }

  bool empty() const {
    return data.empty();
  }

 private:
  vector<T> data;
};

int main() {
  Queue<int> q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);

  while (!q.empty()) {
    cout << q.front() << "\n";
    q.dequeue();
  }

  return 0;
}
