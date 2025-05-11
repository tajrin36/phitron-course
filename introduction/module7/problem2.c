//! Take an array from input and count how many odd numbers are present in that
//! array.
#include <stdio.h>
int main() {
  int size;
  printf("Enter array size: ");
  scanf("%d", &size);
  int arr[size], count = 0;
  printf("Enter numbers: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 != 0) {
      count++;
    }
  }
  printf("There are %d odd numbers in this array!", count);
  return 0;
}