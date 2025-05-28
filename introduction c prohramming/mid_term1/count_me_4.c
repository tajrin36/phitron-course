#include <stdio.h>
#include <string.h>

int main() {
  char s[10001];
  scanf("%s", s);
  int length = strlen(s);

  int frequency[26] = {0};

  for(int i = 0; i < length; i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      int val = s[i] - 'a';
      frequency[val]++;
    }
  }

  for (int i = 0; i < 26; i++) {
    printf("%c - %d\n", 'a' + i, frequency[i]);
  }

  return 0;
}
