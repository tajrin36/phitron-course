#include <stdio.h>
#include<string.h>
int main() {
  char s[1000001];
  scanf("%s", s);
//   int length = strlen(s);
  int sum = 0;

  for (int i = 0; s[i] != '\0'; i++) {
    sum = sum + s[i] - 48;
  }
  printf("%d", sum);
  return 0;
}