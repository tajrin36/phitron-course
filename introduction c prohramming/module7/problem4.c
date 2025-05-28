//! Take an array from input and print the minimum value of that array.
#include <stdio.h>
int main() {
  int size;
  printf("Enter array size: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter numbers: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  int min = arr[0];                 // Initialize to first element
  for (int i = 1; i < size; i++) {  // Start from index 1
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  printf("Maximum number of the array = %d", min);
  return 0;
}