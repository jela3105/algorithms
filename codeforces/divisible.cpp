#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

int main() {

  int tests_cases;
  cin >> tests_cases;

  while (tests_cases != 0) {
    long long int a, b;
    cin >> a >> b;

    if (a % b == 0) {
      cout << "0" << endl;
    } else {
      cout << b - (a % b) << endl;
    }
    tests_cases--;
  }

  return 0;
}
