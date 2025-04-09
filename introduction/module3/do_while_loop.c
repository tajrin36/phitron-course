#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        if (i % 2 != 0)
        {
            printf("%d is odd\n", i);
        }
        i++;
    } while (i <= 10);

    return 0;
}
