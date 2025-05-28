#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],reverse_array[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        reverse_array[i] = arr[i]; //copy the array in reverse array
    }
    int i = 0, j = n-1, temp;
    while(i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    int count = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] != reverse_array[i]){
            count = 0;
            break;
        }
    }
    if(count == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}