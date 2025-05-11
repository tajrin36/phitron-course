#include <stdio.h>
int main() {
  char s[100001];
  fgets(s, 100001, stdin);
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] -= 32;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += 32;
    } else if (s[i] == ',') {
      s[i] -= 12;
    }
  }
  printf("%s", s);

  return 0;
}