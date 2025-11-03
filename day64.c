/*Q114: Write a program to take a string s as input. The task is to find
the length of the longest substring without repeating characters. Print the
length as output.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);

    int n = strlen(s);
    int i, j, maxLen = 0;

    for (i = 0; i < n; i++)
    {
        int visited[256] = {0};
        int len = 0;

        for (j = i; j < n; j++)
        {
            if (visited[(int)s[j]] == 1)
            {
                break;
            }
            visited[(int)s[j]] = 1;
            len++;
        }

        if (len > maxLen)
        {
            maxLen = len;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}
