#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int value, count = -1;
  scanf("%d", &value);
  for (int i = 0; i < n; i++) {
    if (arr[i] == value) {
      // printf("%d",i);
      count++;
      printf("%d",i);
      break;
    }
  }
  if(count == -1){
    printf("-1");
  }
  return 0;
}