#include <stdio.h>
int main()
{

    //! arithmetic operator
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d",&a, &b);

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = a / b;
    int mod = a % b;

    printf("sum = %d\n",sum);
    printf("sub = %d\n",sub);
    printf("mul = %d\n",mul);
    printf("div = %f\n",div);
    printf("mod = %d\n",mod);
    
    return 0;
}