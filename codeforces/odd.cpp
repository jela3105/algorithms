#include <iostream>
#include <vector>

using namespace std;

int main() {
  int tests;
  cin >> tests;
  do {
    int array_length;
    cin >> array_length;
    auto numbers = vector<int>(array_length);

    for (auto i = 0; i < array_length; i++) {
      cin >> numbers[i];
    }

    int total_odds = 0;
    for (auto i = 0; i < array_length; i++) {
      if (numbers[i] % 2 == 1) {
        total_odds++;
      }
    }
    const int evens = array_length - total_odds;
    if (evens == 0) {
      if (array_length % 2 == 0) {
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }
    } else if (total_odds == 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
    tests--;
  } while (tests != 0);
  return 0;
}
// 36:49
