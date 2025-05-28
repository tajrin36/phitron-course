#include <stdio.h>
int main()
{
    int a, div;
    scanf("%d", &a);

    //! total 4 digits.. let,4567..to get the first digit we have to divide the value by 1000.
    div = a / 1000;

    if (div % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}

//! bonus concept: let a = 4567. we need the last value...to get the last value we have to mod the value by 10. a % 10 = last value.... a % 100 = last 2 digits....