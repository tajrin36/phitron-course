#include <stdio.h>
int main() {
  char ch;
  int ascii;
  scanf("%c", &ch);
  ascii = (int)ch;

  if (ascii >= 97 && ascii <= 122) {
    if (ascii == 122) {
      printf("a");
    } else {
      ascii++;
      printf("%c", (char)ascii);
    }
  }
  return 0;
}