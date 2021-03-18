#include <cctype>
#include <ctype.h>
#include <iostream>

using namespace std;

bool validate_all_upper(string word) {
  for (int i = 0; i < word.length(); i++) {
    if (!isupper(word[i])) {
      return false;
    }
  }
  return true;
}
bool validate_one_upper(string word) {
  for (int i = 1; i < word.length(); i++) {
    if (isupper(word[i])) {
      return false;
    }
  }
  return true;
}
bool validate_all_lower(string word) {
  for (int i = 1; i < word.length(); i++) {
    if (isupper(word[i])) {
      return false;
    }
  }
  return true;
}

int main() {

  string word;
  cin >> word;
  if (isupper(word[0]) and isupper(word[1])) {
    validate_all_upper(word) ? cout << "YES" : cout << "NO";
    return 0;
  } else if (isupper(word[0]) and !isupper(word[1])) {
    validate_one_upper(word) ? cout << "YES" : cout << "NO";
    return 0;
  } else {
    validate_all_lower(word) ? cout << "YES" : cout << "NO";
    return 0;
  }
  return 0;

  /*if (isupper(word[0])) {
    if (isupper(word[1])) {
      validate_all_upper(word) ? cout << "YES" : cout << "NO";
      return 0;
    } else {
      validate_one_upper(word) ? cout << "YES" : cout << "NO";
      return 0;
    }
  } else {
    validate_all_lower(word) ? cout << "YES" : cout << "NO";
    return 0;
  }
  return 0;*/
}
