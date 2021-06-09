#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
  auto line = string{};
  while (getline(cin, line)) {
    auto realText = list<char>();
    auto i = realText.begin();
    for (auto &c : line)
      if (c == '[') {
        i = realText.begin();
      } else if (c == ']') {
        i = realText.end();
      } else {
        realText.insert(i, c);
      }
    for (auto &c : realText) {
      cout << c;
    }
    cout << endl;
  }
  return 0;
}
