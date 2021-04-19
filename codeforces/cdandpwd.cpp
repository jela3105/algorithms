#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

vector<string> splitPath(string str, char pattern) {
  int posInit = 0;
  int posFound = 0;
  string splitted;
  vector<string> results;
  while (posFound >= 0) {
    posFound = str.find(pattern, posInit);
    splitted = str.substr(posInit, posFound - posInit);
    posInit = posFound + 1;
    results.push_back(splitted);
  }
  return results;
}

void printPath(vector<string> nodes) {
  if (nodes.size() == 0) {
    cout << '/' << endl;
  } else {
    cout << '/';
    for (auto node : nodes) {
      cout << node;
      if (node == "")
        continue;
      cout << '/';
    }
    cout << endl;
  }
}

int main() {

  int n;
  cin >> n;
  auto path = vector<string>();
  while (n--) {
    string command;
    cin >> command;
    if (command == "pwd") {
      printPath(path);
      continue;
    }
    string query;
    cin >> query;
    auto nodes = splitPath(query, '/');
    if (query[0] == '/') {
      path.erase(path.begin(), path.end());
    }
    for (int i = 0; i < nodes.size(); i++) {
      if (nodes[i] == "..") {
        path.pop_back();
      } else {
        path.push_back(nodes[i]);
      }
    }
  }
  return 0;
}
