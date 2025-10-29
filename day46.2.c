/*Q92: Find the first repeating lowercase alphabet in a string.*/

#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    int found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            break;
        }
    }

    if (found == 0)
    {
        printf("No repeating character\n");
    }
    return 0;
}
