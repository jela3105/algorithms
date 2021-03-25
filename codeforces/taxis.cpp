#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int groups_total;
  cin >> groups_total;
  auto groups = vector<int>(groups_total);

  for (auto &group : groups) {
    cin >> group;
  }

  sort(groups.begin(), groups.end());

  // vamos iterando, si la suma es mayor que 4 pedimos otro taxi
  int taxis = 0;
  int personas = 0;
  for (auto &group : groups) {
    if (group >= 4) {
      taxis++;
    }
    personas = personas + group;
    if (personas >= 4) {
      taxis++;
      personas = group;
      if (group == 4) {
        taxis++;
        personas = 0;
      }
    }
  }
  cout << taxis;
  return 0;
}
