void triangleType(int nums[])
{
    int a = nums[0];
    int b = nums[1];
    int c = nums[2];

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("None\n");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral Triangle \n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }
}

int main()
{
    int nums[3];

    printf("Enter three sides: ");
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    triangleType(nums);

    return 0;
}