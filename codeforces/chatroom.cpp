#include <iostream>
#include <vector>

using namespace std;

int main() {

  string s;
  cin >> s;
  auto hello = vector<char>();
  hello.push_back('h');
  hello.push_back('e');
  hello.push_back('l');
  hello.push_back('l');
  hello.push_back('o');

  for (auto c : s) {
    if (hello.empty()) {
      break;
    }
    if (c == hello.front()) {
      hello.erase(hello.begin());
    }
  }

  if (hello.empty()) {
    cout << "YES";
    return 0;
  }
  cout << "NO";

  return 0;
}
