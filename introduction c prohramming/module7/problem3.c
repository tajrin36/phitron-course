//! Take an array from input and print the maximum value of that array.
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
  int max = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  //! another way to find max value
//   int max = arr[0];                 // Initialize to first element
//   for (int i = 1; i < size; i++) {  // Start from index 1
//     if (arr[i] > max) {
//       max = arr[i];
//     }
//   }
  printf("Maximum number of the array = %d", max);

  return 0;
}