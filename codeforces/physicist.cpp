#include <iostream>
using namespace std;

int main() {
  int total_vectors;
  cin >> total_vectors;

  int vectors[3][total_vectors];
  for (int i = 0; i < total_vectors; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> vectors[j][i];
    }
  }
  /*for (int i = 0; i < total_vectors; i++) {
    for (int j = 0; j < 3; j++) {
      cout << " " << vectors[j][i];
    }
    cout << endl;
  }*/

  int x = 0, y = 0, z = 0;
  for (int i = 0; i < total_vectors; i++) {
    x += vectors[0][i];
  }
  for (int i = 0; i < total_vectors; i++) {
    y += vectors[1][i];
  }
  for (int i = 0; i < total_vectors; i++) {
    y += vectors[2][i];
  }
  if (x == 0 and y == 0 and z == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
