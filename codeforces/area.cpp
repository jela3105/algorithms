#include <iostream>
#include <vector>
using namespace std;

int main() {
  bool in_figure = false;
  int h, w, count = 0;
  cin >> h >> w;
  for (int i = 0; i < h; i++) {
    auto row = vector<char>(w);
    for (int j = 0; j < w; j++) {
      if (row[j] == '/' or row[j] == '\\' or row[j] == '.' and in_figure) {
        count++;
      }
    }
  }

  return 0;
}
