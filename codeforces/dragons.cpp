#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

struct dragon_t {
  int strength, bonus;
};

int main() {

  int dragon_strength, total_dragons;
  cin >> dragon_strength >> total_dragons;

  auto dragons = vector<dragon_t>(total_dragons);

  for (auto &dragon : dragons) {
    cin >> dragon.strength >> dragon.bonus;
  }

  sort(begin(dragons), end(dragons), [](const dragon_t d1, const dragon_t d2) {
    return d1.strength < d2.strength;
  });

  for (auto dragon : dragons) {
    if (dragon.strength >= dragon_strength) {
      cout << "NO" << endl;
      return 0;
    } else {
      dragon_strength += dragon.bonus;
    }
  }
  cout << "YES" << endl;

  return 0;
}
