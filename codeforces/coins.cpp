#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int i;
  cin >> i;
  do {
    int a,b,c,n;
    cin >> a >> b >> c >> n;
    const auto sister_with_more = max({a,b,c});
    const auto coins_to_tie = (sister_with_more -a + sister_with_more -b + sister_with_more -c);
    const auto left = n - coins_to_tie;
    if(left < 0){
     cout << "NO" << endl;
    }else{
      if(left % 3 == 0){
      cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }
    }
    i--;
  }while (i!=0);
  
  return 0;
}
