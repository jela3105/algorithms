#include <iostream>
using namespace std;

int main() {

  int matrix[5][5];
  int x, y;
  int moves = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> matrix[i][j];
      if (matrix[i][j] == 1) {
        y = i;
        x = j;
      }
    }
  }

  if (x > 2) {
    while (x > 2) {
      x--;
      moves++;
    }
  } else if (x < 2) {
    while (x < 2) {
      x++;
      moves++;
    }
  }

  if (y > 2) {
    while (y > 2) {
      y--;
      moves++;
    }
  } else if (y < 2) {
    while (y < 2) {
      y++;
      moves++;
    }
  }
  cout << moves;

  return 0;
}
