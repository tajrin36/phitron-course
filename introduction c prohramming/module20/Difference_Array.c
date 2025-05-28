#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n); 

  for (int i = 0; i < n; i++) {
    int size;
    scanf("%d", &size);

    int arr[size], sort_array[size];

    for (int j = 0; j < size; j++) {
      scanf("%d", &arr[j]);
      sort_array[j] = arr[j];
    }

    for (int j = 0; j < size; j++) {
      for (int k = j + 1; k < size; k++) {
        if (sort_array[j] > sort_array[k]) {
          int temp = sort_array[j];
          sort_array[j] = sort_array[k];
          sort_array[k] = temp;
        }
      }
    }

    for (int j = 0; j < size; j++) {
      printf("%d ", abs(arr[j] - sort_array[j]));
    }
    printf("\n");
  }
  return 0;
}
