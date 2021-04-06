#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  string stones;
  cin >> n >> stones;

  auto stones_table = vector<char>(stones.begin(), stones.end());
  int counter = 0;
  for (int i = 0; i < n; i++) {
    if (stones_table[i] == stones_table[i + 1]) {
      counter++;
    }
  }

  cout << counter;
  return 0;
}
