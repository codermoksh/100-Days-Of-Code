/*Q91: Remove all vowels from a string.*/

#include <stdio.h>

int main()
{
    char str[100];
    char result[100];
    int i=0;
    int j=0;

    printf("enter the string: ");
    scanf("%[^\n]", str);

    while( str[i] != '\0' )
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';
    printf("%s\n",result);
    return 0;
}
