#include <stdio.h>
int main()
{
    int n,x, evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            evenCount++;
        }
        else if (x % 2 != 0)
        {
            oddCount++;
        }
        if (x > 0)
        {
            positiveCount++;
        }
        else if (x < 0)
        {
            negativeCount++;
        }
    }
    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);
    return 0;
}