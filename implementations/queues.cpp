#include <iostream>

using namespace std;

template <typename T> using pointer = T *;

template <typename T> struct node {
  T value;
  pointer<node> next;

  node(T value) : value{value}, next{nullptr} {};
};

template <typename T> class queue {
  pointer<node<T>> _front, _back;
  size_t _size;

public:
  queue() : _front{nullptr}, _back{nullptr}, _size{0} {};

  auto empty() -> bool { return not _front and not _back; }

  auto push(T value) -> void {
    auto n = new node<T>(value);
    if (empty()) {
      _front = _back = n;
    } else {
      _back->next = n;
      _back = n;
    }
    _size++;
  }

  auto pop() -> void {
    if (empty())
      return;
    auto aux = _front;
    _front = _front->next;
    delete aux;
    _size--;
  }
  auto front() -> T { return _front->value; }
  auto back() -> T { return _back->value; }
  auto size() -> size_t { return _size; }
};

auto main() -> int {

  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  while (!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }
  return 0;
}
