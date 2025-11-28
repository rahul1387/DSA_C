#include <stdio.h>
#include <ctype.h>

void toLowerCase(char s[])
{
    int i = 0;

    while (s[i] != '\0')
    {
        s[i] = tolower(s[i]);
        i++;
    }
}

int main()
{
    char s[101];

    printf("Enter a string: ");
    scanf("%s", s);

    toLowerCase(s);

    printf("Lowercase string: %s\n", s);

    return 0;
}