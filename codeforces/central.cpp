#include <iostream>
using namespace std;

int main() {
  int points_length;
  int super_central = 0;
  cin >> points_length;
  int points[points_length][2];

  for (int i = 0; i < points_length; i++) {
    cin >> points[i][0];
    cin >> points[i][1];
  }

  for (int i = 0; i < points_length; i++) {
    bool less = false;
    bool higher = false;
    for (int j = 0; j < points_length; j++) {
      if (points[i][0] == points[j][0]) {
        if (points[i][1] != points[j][1]) {
          if (points[i][1] > points[j][1]) {
            less = true;
          } else {
            higher = true;
          }
          if (less and higher) {
            cout << i << j << " same" << endl;
            for (int iy = 0; iy < points_length; iy++) {
              bool lessy = false;
              bool highery = false;
              for (int jy = 0; jy < points_length; jy++) {
                if (points[iy][1] == points[jy][1]) {
                  if (points[iy][0] != points[jy][0]) {
                    if (points[iy][0] > points[jy][0]) {
                      lessy = true;
                    } else {
                      highery = true;
                    }
                    if (lessy and highery) {
                      cout << iy << jy << " same y" << endl;
                      super_central++;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  /*for (int i = 0; i < points_length; i++) {
    cout << points[i][0] << " ";
    cout << points[i][1] << endl;
  }*/
  cout << super_central << endl;
  return 0;
}
