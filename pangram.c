#include <stdio.h>
#include <stdbool.h>

bool checkIfPangram(char *sentence)
{
    int alphabets[26] = {0}; /// -----> There is no alphabets initialy letter we add them.
    int i = 0;

    while (sentence[i] != '\0') /// ---> it will run the loop until the strings ends.
    {
        alphabets[sentence[i] - 'a'] = 1; /// -----> checking if alphabet presents.
        i++;
    }

    for (i = 0; i < 26; i++)
    {
        if (alphabets[i] == 0) /// ----> checking if all alphabets are there at least 1 time if there then it will return false and if not then it will return true
            return false;
    }

    return true;
}

int main()
{
    char sentence[1001];

    printf("Enter a sentence (lowercase letters only): ");
    scanf("%s", sentence);

    if (checkIfPangram(sentence))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}