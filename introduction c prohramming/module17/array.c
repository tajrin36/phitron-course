#include <stdio.h>

void array_recursion(int arr[], int n, int i){
    
    if(i == n){
        return;
    }

    printf("%d\n", arr[i]); 
    array_recursion(arr,n,i+1);
}
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  array_recursion(arr, n, 0);
  return 0;
}