#include <iostream>

using namespace std;

int main() {
  int n;
  long long int packs;
  cin >> n;
  cin >> packs;
  int sorry = 0;
  for (auto x = 0; x < n; x++) {
    char sing;
    cin >> sing;
    if (sing == '+') {
      int packs_to_add;
      cin >> packs_to_add;
      packs += packs_to_add;
    } else {
      int packs_to_substract;
      cin >> packs_to_substract;
      if (packs - packs_to_substract >= 0) {
        packs -= packs_to_substract;
      } else {
        sorry++;
      }
    }
  }
  cout << packs << " " << sorry;
  return 0;
}
