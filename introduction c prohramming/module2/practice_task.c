//! 1.Take a number from user and check if its a even number or odd number.

#include<stdio.h>
int main(){
    int num1;
    printf("Enter a numbers: ");
    scanf("%d",&num1);

    if(num1 % 2 == 0){
        printf("%d is a even number\n",num1);
    }
    else{
        printf("%d is a odd number\n",num1);
    }


    //! 2.Take a number from user and check if its a positive or negative number.

    if(num1 < 0){
        printf("%d is a negative number\n",num1);
    }
    else if (num1 > 0)
    {
        printf("%d is a positive number\n",num1);
    }
    else{
        printf("number is 0\n");
    }
}