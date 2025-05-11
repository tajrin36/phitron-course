#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    char s[10001];
    scanf("%s", s);

    int count_small = 0, count_capital = 0, count_digit = 0;
    int length = strlen(s);

    for (int j = 0; j < length; j++) {
      if (s[j] >= 'a' && s[j] <= 'z') {
        count_small++;
      } else if (s[j] >= 'A' && s[j] <= 'Z') {
        count_capital++;
      } else if (s[j] >= '0' && s[j] <= '9') {
        count_digit++;
      }
    }
    printf("%d %d %d\n", count_capital, count_small, count_digit);
  }

  return 0;
}
