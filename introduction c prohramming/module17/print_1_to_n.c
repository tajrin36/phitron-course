#include <stdio.h>
void print_number(int n) {
  if (n == 11) {
    return;
  }
  printf("%d\n", n);
  print_number(n + 1);
}
int main() {
  int n = 1;
  print_number(n);
  return 0;
}