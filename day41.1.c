/*Q81: Count characters in a string without using built-in length functions.*/

#include <stdio.h>

int main()
{
    char str[100];
    int i=0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    while (str[i] != '\0')
    {
        i++;
    }

    printf("%d\n", i);

    return 0;
}
