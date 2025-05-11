#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);  // Input number of rows

  int star = 1;
  int space = n - 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= space; j++) {
      printf(" ");  // print leading spaces
    }
    for (int k = 1; k <= star; k++) {
      printf("*");  // print stars without extra space
    }
    printf("\n");  // new line
    star += 2;     // next row has 2 more stars
    space--;       // and 1 less leading space
  }

  return 0;
}
