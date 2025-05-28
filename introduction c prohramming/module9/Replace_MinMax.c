#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int min = arr[0];
  int max = arr[0];
  int minIndex = 0;
  int maxindex = 0;

  for (int i = 0; i < n; i++) {
    if (min > arr[i]) {
      min = arr[i];
      minIndex = i;
    } else if (max < arr[i]) {
      max = arr[i];
      maxindex = i;
    }
  }
  int temp;
  temp = arr[minIndex];
  arr[minIndex] = arr[maxindex];
  arr[maxindex] = temp;

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
