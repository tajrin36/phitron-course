#include <stdio.h>
#include<stdbool.h> // for bollean datatype
int main()
{
    //! print function
    printf("hello world!\n");

    //! variable
    int a = 2;
    printf("num: %d\n",a);

    //! data type & format specifier
    int num1 = 10;
    float num2 = 20.30;
    char ch = 'h';
    double decimalNumber = 345.1415933;
    printf("integer number: %d\n",num1); 
    printf("float number: %f\n",num2); 
    printf("character: %c\n",ch);
    printf("double: %lf\n", decimalNumber);
    
    //! type casting
    printf("float number: %f\n",(float)num1); 
    printf("integer number: %d\n",(int)num2); 
    printf("integer number: %d\n",(int)ch); 

    //! boolean data type
    bool bool1 = true;
    bool bool2 = false;
    printf("boolean true value: %d\n",bool1);
    printf("boolean false value: %d\n",bool2);

    //! take input from user
    int numberInput;
    float floatInput;
    char charInput;

    printf("Enter integer number: ");
    scanf("%d",&numberInput);
    printf("integer number is: %d\n",numberInput);

    printf("Enter float number: ");
    scanf("%f",&floatInput);
    printf("float number is: %f\n",floatInput);

    // To fix newline issue before reading a char
    getchar(); // consume leftover newline

    printf("Enter char number: ");
    scanf("%c",&charInput);
    printf("char number is: %c\n",charInput);

    //! data type limitation 
    //! interger limit 10^9
    //! long long int can hold 10^18

    long long int bigInteger;
    printf("Enter a long long integer: ");
    scanf("%lld", &bigInteger);
    printf("You entered long long integer: %lld\n", bigInteger);
    
}

