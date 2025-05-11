#include <stdio.h>
int main() {
  int arr[5] = {10, 20, 30, 40, 50}, sum = 0;

  for (int i = 0; i < 5; i++) {
    sum = sum + arr[i];
    printf("%d \n",arr[i]);
  }
  printf("summation of array value = %d\n", sum);

  return 0;
}