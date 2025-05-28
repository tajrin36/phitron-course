//! 1.Write a c program to print 8’s time table to 200
#include <stdio.h>
int main()
{
    for (int i = 0; i <= 200; i++)
    {
        printf("8 * %d = %d\n", i, (8 * i));
    }

    //! 2. Write a c program to print all odd number from 100 to 1.
    for (int i = 100; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d is an odd number\n", i);
        }
    }

    return 0;
}
