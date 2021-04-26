#include <iostream>
#include <queue>

using namespace std;

int main() {
  int n, aux;
  while (cin >> n) {
    if (n == 0)
      break;
    queue<int> q;
    for (int i = 1; i <= n; i++)
      q.push(i);

    cout << "Discarded cards:";
    while (q.size() > 1) {
      cout << " " << q.front();
      q.pop();
      aux = q.front();
      q.pop();
      if (!q.empty())
        cout << ",";
      q.push(aux);
    }
    cout << "\nRemaining card: " << q.front() << endl;
  }
  return 0;
}
