#include <iostream>

using namespace std;

int main() {
  int n, k, ml, l, r, g, x, y;
  //  1  7  4   5  5  8  3  2
  cin >> n >> k >> ml >> l >> r >> g >> x >> y;

  // vemos cantidad total de ingredientes

  int total_ml = k * ml; // 7 * 4 = 28
  int total_r = l * r;   // 5 * 5 = 25

  // preparamos shots

  int total_shots = 0;
  while (total_ml - x >= 0 and total_r - 1 >= 0 and g - y >= 0) {
    total_ml = total_ml - x;
    g = g - y;
    total_r--;
    total_shots++;
  }

  int abraham_shots = total_shots / n;
  cout << abraham_shots;

  return 0;
}
