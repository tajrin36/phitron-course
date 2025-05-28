#include <stdio.h>
int main() {
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int arr[n + 1];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int x, value;
  printf("Enter array index: ");
  scanf("%d", &x);
  printf("Enter value to insert: ");
  scanf("%d", &value);

  for (int i = 0; i < n; i++) {
    if (i == x) {
      for (int i = n + 1; i >= x; i--) {
        arr[i + 1] = arr[i];
        arr[i] = value;
      }
    }
  }

  for (int i = 0; i <= n; i++) {
    printf("%d ", arr[i]);
  }

  //! another way to insert value into array
  //   for (int i = n; i >= x + 1; i--) {
  //     arr[i] = arr[i - 1];
  //   }
  //   arr[x] = value;
  //   for (int i = 0; i <= n; i++) {
  //     printf("%d ", arr[i]);
  //   }

  return 0;
}