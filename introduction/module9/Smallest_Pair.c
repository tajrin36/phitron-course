#include <stdio.h>
int main() {
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
    int min_sum;
    int count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int sum_result = arr[i] + arr[j] + j - i;

        if(count != 0){
            min_sum = sum_result;
            count = 1;
        }else if(sum_result < min_sum){
            min_sum = sum_result;
        }
      }
    }
    printf("%d",min_sum);
  }
  return 0;
}