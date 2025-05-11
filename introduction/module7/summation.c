#include <stdio.h>
int main() {
  long long int n;
  scanf("%lld", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  long long int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
  long long int result;
  if (sum < 0) {
    result = (sum * (-1));
    printf("%lld", result);
  } else {
    printf("%lld", sum);
  }

  return 0;
}