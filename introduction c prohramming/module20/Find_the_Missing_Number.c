#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    long long m;
    int a, b, c;
    scanf("%lld %d %d %d", &m, &a, &b, &c);

    int mul = a * b * c;
    long long result = m / mul;

    if (mul == 0) {
      if (m == 0) {
        printf("0\n");
      } else {
        printf("-1\n");
      }
    } else if (m % mul != 0) {
      printf("-1\n");
    } else {
      printf("%lld\n", result);
    }
  }

  return 0;
}