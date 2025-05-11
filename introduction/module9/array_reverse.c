#include <stdio.h>
int main() {
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int i = 0, j = n - 1, temp;  // i starting position...j ending position

  //! using for loop
  for (int i = 0, j = n - 1; i < j; i++, j--) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  //! using while loop
  while (i < j) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    i++;
    j--;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}