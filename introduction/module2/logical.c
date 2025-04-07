#include <stdio.h>
int main() {
    int num1, num2;

    // Taking input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Logical Operators
    printf("\nLogical Operator Results:\n");
    printf("num1 > 0 && num2 > 0: %d\n", num1 > 0 && num2 > 0);
    printf("num1 > 0 || num2 > 0: %d\n", num1 > 0 || num2 > 0);
    printf("!(num1 > num2)      : %d\n", !(num1 > num2));

    return 0;
}
