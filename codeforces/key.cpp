#include <iostream>
using namespace std;

int main() {
  char direction;
  cin >> direction;
  string text;
  cin >> text;

  string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

  for (int i = 0; i < text.length(); i++) {
    if (direction == 'R') {
      cout << keys[keys.find(text[i]) - 1];
    } else {
      cout << keys[keys.find(text[i]) + 1];
    }
  }
  return 0;
}
