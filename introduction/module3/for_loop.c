#include<stdio.h>
int main(){

    //! for loop
    for(int i = 1; i <= 10; i++){
        printf("hello!\n");
    }

    //! number printing using for loop
    for(int i = 0; i <= 20; i++){
        printf("number is %d\n",i);
    }

    //! ************ print odd numbers from 1-10 *****************

    //! type-1(using only loop)
    for(int i = 1; i <= 10; i+=2){
        printf("odd numbers: %d\n",i);
    }

    //! type-2(using condition and loop)
    for(int i = 1; i <= 10; i++){
        if(i % 2 != 0){
            printf("odd numbers: %d\n",i);
        }
    }

    //! print decrement numbers from (10-1)
    for(int i = 10; i >= 1; i--){
        printf("numbers: %d\n",i);
    }

    //! multiplication table
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n",num,i,num*i);
    } 

    //! summation 1 to n number
    int n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        printf("Step %d: %d + %d = ", i, sum, i);
        sum += i;
        printf("%d\n", sum);
    }

    //! check even, odd using loop and condition
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    for(int i = 0; i <= number; i++){
        if(i % 2 == 0){
            printf("%d --> even\n",i);
        }
        else{
            printf("%d --> odd\n",i);
        }
    }

    return 0;
}