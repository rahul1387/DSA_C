#include <stdio.h>

int addDigits(int num)
{
    int sum, rem;

    while (num >= 10)
    {
        sum = 0;

        while (num > 0)
        {
            rem = num % 10;
            sum += rem;
            num /= 10;
        }

        num = sum;
    }

    return num;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = addDigits(num);

    printf("Final Single Digit Sum = %d\n", result);

    return 0;
}