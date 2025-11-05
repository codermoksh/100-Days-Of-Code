/*Q120: Write a program to take a string input. Change it to sentence case.*/

#include <stdio.h>
#include <ctype.h>

void toSentenceCase(char str[])
{
    int i = 0;
    int newWord = 1;

    while (str[i] != '\0')
    {
        if (newWord && isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
            newWord = 0;
        }
        else
        {
            str[i] = tolower(str[i]);
        }

        if (str[i] == ' ')
        {
            newWord = 1;
        }

        i++;
    }
}

int main()
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toSentenceCase(str);

    printf("Output: %s", str);

    return 0;
}
