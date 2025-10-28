/*Q86: Check if a string is a palindrome.*/

#include <stdio.h>

int main()
{
    char str[100];
    int i=0, length=0, flag=1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (i=0; i<length/2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
