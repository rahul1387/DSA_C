#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *s)
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

char *firstPalindrome(char **words, int wordsSize)
{
    for (int i = 0; i < wordsSize; i++)
    {
        if (isPalindrome(words[i]))
        {
            return words[i];
        }
    }
    return ""; 
}

int main()
{
    char *words[] = {"abc", "car", "ada", "racecar", "cool"};
    int size = 5;

    char *result = firstPalindrome(words, size);

    printf("First Palindromic String: \"%s\"\n", result);

    return 0;
}