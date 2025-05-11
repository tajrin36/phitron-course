#include<stdio.h>
int main(){
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter numbers: ");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = size-1; i >= 0; i--){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}