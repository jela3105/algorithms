#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, t;
  string initial_queue;
  cin >> n >> t >> initial_queue;
  auto queue = vector<char>(initial_queue.begin(), initial_queue.end());
  auto new_queue = vector<char>(initial_queue.begin(), initial_queue.end());
  while (t > 0) {
    for (int i = 0; i < n; i++) {
      if (queue[i] == 'B' and queue[i + 1] == 'G') {
        new_queue[i] = 'G';
        new_queue[i + 1] = 'B';
      }
    }
    queue = new_queue;
    t--;
  }

  for (auto kid : new_queue) {
    cout << kid;
  }
}
