#include <iostream>
#include <utility>

using namespace std;

int main() {
  int k;
  pair<int, int> division_point;
  cin >> k;
  while (k != 0) {
    cin >> division_point.first;
    cin >> division_point.second;
    while (k--) {
      int x, y;
      cin >> x >> y;
      if (x < division_point.first and y < division_point.second)
        cout << "SO" << endl;
      else if (x > division_point.first and y > division_point.second)
        cout << "NE" << endl;
      else if (x > division_point.first and y < division_point.second)
        cout << "SE" << endl;
      else if (x < division_point.first and y > division_point.second)
        cout << "NO" << endl;
      else
        cout << "divisa" << endl;
    }
    cin >> k;
  }

  return 0;
}
