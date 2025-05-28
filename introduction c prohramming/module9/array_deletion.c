#include<stdio.h>
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int idx;
    printf("Which index you want to delete? "); //10 20 30 40 50
    scanf("%d",&idx);

    for(int i = idx+1; i < n; i++){
        arr[i-1] = arr[i];
    }
    for(int i = 0; i < n-1; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}