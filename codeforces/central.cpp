#include <iostream>
#include <vector>
using namespace std;

int main() {
  int points_length;
  int super_central_points = 0;
  cin >> points_length;
  auto points = vector<pair<int, int>>(points_length);

  for (auto &point : points) {
    cin >> point.first;
    cin >> point.second;
  }

  for (auto taken_point : points) {
    bool x_lower = false, x_heigher = false, y_lower = false, y_heigher = false;
    for (auto some_point : points) {
      if (taken_point.first == some_point.first and
          taken_point.second != some_point.second) {
        taken_point.second < some_point.second ? y_heigher = true
                                               : y_lower = true;
      }
      if (taken_point.second == some_point.second and
          taken_point.first != some_point.first) {
        taken_point.first < some_point.first ? x_heigher = true
                                             : x_lower = true;
      }
      if (x_lower and x_heigher and y_heigher and y_lower) {
        x_lower = false;
        x_heigher = false;
        y_heigher = false;
        y_lower = false;
        super_central_points++;
      }
    }
  }

  cout << super_central_points;

  return 0;
}
