#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main() {

  int groups_total;
  cin >> groups_total;
  int groups_of_one = 0;
  int groups_of_two = 0;
  int groups_of_three = 0;
  int groups_of_four = 0;

  for (int i = 0; i < groups_total; i++) {
    int group;
    cin >> group;
    switch (group) {
    case 1:
      groups_of_one++;
      break;
    case 2:
      groups_of_two++;
      break;
    case 3:
      groups_of_three++;
      break;
    case 4:
      groups_of_four++;
      break;
    }
  }

  int taxis = 0;
  taxis += groups_of_four;

  while (groups_of_three > 0 and groups_of_one > 0) {
    taxis++;
    groups_of_three--;
    groups_of_one--;
  }
  while (groups_of_three - 1 >= 0) {
    groups_of_three--;
    taxis++;
  }
  while (groups_of_two - 2 >= 0) {
    taxis++;
    groups_of_two -= 2;
  }
  while (groups_of_two - 1 >= 0 and groups_of_one - 2 >= 0) {
    taxis++;
    groups_of_two--;
    groups_of_one -= 2;
  }
  while (groups_of_two - 1 >= 0 and groups_of_one - 1 >= 0) {
    taxis++;
    groups_of_two--;
    groups_of_one -= 1;
  }
  if (groups_of_one > 4 and groups_of_one != 0) {
    while (groups_of_one - 4 > 0) {
      groups_of_one -= 4;
      taxis++;
    }
  }
  if (groups_of_one <= 4 and groups_of_one != 0) {
    taxis++;
  }
  if (groups_of_three != 0) {
    taxis++;
  }
  if (groups_of_two != 0) {
    taxis++;
  }

  // cout << groups_of_one << groups_of_two << groups_of_three << endl;
  cout << taxis;

  return 0;
}
