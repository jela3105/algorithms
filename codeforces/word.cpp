#include <algorithm>
#include <cctype>
#include <ctype.h>
#include <iostream>
using namespace std;

int main() {

  string word;
  cin >> word;

  int upper_count = 0, lower_count = 0;

  for (int i = 0; i < word.length(); i++) {
    if (isupper(word[i])) {
      upper_count++;
    } else {
      lower_count++;
    }
  }

  if (upper_count > lower_count) {
    for (int i = 0; i < word.length(); i++) {
      word[i] = toupper(word[i]);
    }
  } else {
    for (int i = 0; i < word.length(); i++) {
      word[i] = tolower(word[i]);
    }
  }

  cout << word;

  return 0;
}
