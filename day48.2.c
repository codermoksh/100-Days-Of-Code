/*Q96: Reverse each word in a sentence without changing the word order.*/

#include <stdio.h>

int main()
{
    char str[200];
    int start=0, end=0, i;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (1)
    {
        if (str[end] == ' ' || str[end] == '\0')
        {
            for (i = end - 1; i >= start; i--)
            {
                printf("%c", str[i]);
            }
            if (str[end] == ' ')
            {
                printf(" ");
            }
            else
            {
                break;
            }
            start = end + 1;
        }
        end++;
    }
    printf("\n");

    return 0;
}
