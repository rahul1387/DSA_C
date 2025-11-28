#include <stdio.h>

int countDigits(int num)
{
    int original, count = 0, digit;
    original = num;

    while (num != 0)
    {
        digit = num % 10;

        if (digit != 0 && original % digit == 0)
        {
            count++;
        }

        num = num / 10;
    }

    return count;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = countDigits(num);

    printf("Count of divisible digits = %d\n", result);

    return 0;
}