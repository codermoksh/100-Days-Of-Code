/*Q98: Print initials of a name with the surname displayed in full.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, lastSpace = -1;

    printf("Enter a full name: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            lastSpace = i;
        }
        i++;
    }

    if (str[0] != ' ')
    {
        printf("%c.", str[0]);
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && i < lastSpace && str[i + 1] != ' ')
        {
            printf("%c.", str[i + 1]);
        }
    }

    if (lastSpace != -1)
    {
        printf(" %s", &str[lastSpace + 1]);
    }
    printf("\n");
    
    return 0;
}
