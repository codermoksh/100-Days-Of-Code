/*Q85: Reverse a string.*/

#include <stdio.h>

int main()
{
    char str[100];
    int i=0;
    int length=0;

    printf("enter the string: ");
    scanf("%[^\n]",str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}