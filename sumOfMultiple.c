#include <stdio.h>

int sumOfMultiples(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            sum = sum + i;
        }
    }

    return sum;
}

int main()
{
    int n, result;

    printf("Enter n: ");
    scanf("%d", &n);

    result = sumOfMultiples(n);

    printf("Sum = %d\n", result);

    return 0;
}