#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int value;
  scanf("%d", &value);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int sum = arr[i] + arr[j];
      if (sum == value) {
        printf("%d + %d = %d\n", arr[i], arr[j], sum);
      }
    }
  }
  return 0;
}