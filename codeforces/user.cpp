#include <iostream>
#include <vector>

using namespace std;

int main() {
  int total_contests;
  cin >> total_contests;
  int higher_points = 0, lowest_points = 0, amazing_counter = 0;
  for (int i = 0; i < total_contests; i++) {
    int points;
    cin >> points;
    if (i == 0) {
      higher_points = points;
      lowest_points = points;
      continue;
    }
    if (points > higher_points) {
      higher_points = points;
      amazing_counter++;
      continue;
    }
    if (points < lowest_points) {
      lowest_points = points;
      amazing_counter++;
      continue;
    }
  }
  cout << amazing_counter;

  return 0;
}
