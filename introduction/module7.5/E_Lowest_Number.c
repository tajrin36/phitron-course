#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int min = arr[0];
  int minIndex = 0;
  int i;
  for (i = 1; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
      minIndex = i;
    }
  }
  printf("%d %d", min, minIndex+1);

  return 0;
}