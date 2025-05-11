#include<stdio.h>
int main(){
    // int arr[10];
    // arr[3] = 100;
    // printf("%d\n",arr[3]);

    //! array input
    int array[5];
    printf("Enter numbers: ");
    for(int i = 0; i < 5; i++){
        scanf("%d",&array[i]);
    }

    //! array output
    for(int i = 0; i < 5; i++){
        printf("array[%d] = %d \n",i,array[i]);
    }

    
    return 0;
}