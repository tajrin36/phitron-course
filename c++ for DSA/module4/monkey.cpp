#include <iostream>
using namespace std;
int main() {
  string str;
  while (getline(cin, str)) {
    int alph_count[26] = {0};

    for (int i = 0; i < str.length(); i++) {
      alph_count[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
      if (alph_count[i] > 0) {
        for (int j = 0; j < alph_count[i]; j++) {
          cout << (char)(i + 'a');
        }
      }
    }
    cout << endl;
  }

  return 0;
}