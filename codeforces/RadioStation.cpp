#include <iostream>
#include <map>

using namespace std;

int main() {
  int servers_num;
  int commands;

  cin >> servers_num;
  cin >> commands;

  auto servers = map<string, string>{};
  auto name = string{};
  auto direction = string{};

  while (servers_num--) {
    cin >> name;
    cin >> direction;
    servers[direction] = name;
    // cout << servers[direction] << endl;
  }

  auto action = string{};
  while (commands--) {
    cin >> action;
    cin >> direction;
    direction.pop_back();
    cout << action << " " << direction << "; #" << servers[direction] << endl;
  }

  return 0;
}
