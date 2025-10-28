/*Q83: Count vowels and consonants in a string.*/

#include <stdio.h>

int main()
{
    char str[100];
    int i=0;
    int vow=0, cons=0;

    printf("enter the string: ");
    scanf("%[^\n]", str);

    while(str[i]!='\0')
    {
        if(str[i]== 'a'||str[i]== 'e'||str[i]== 'i'||str[i]== 'o'||str[i]== 'u'||str[i]== 'A'||str[i]== 'E'||str[i]== 'I'||str[i]== 'O'||str[i]== 'U')
        {
            vow++;
        }
        else
        {
            cons++;
        }
        i++;
    }
    printf("vowel: %d, consonent: %d\n",vow ,cons);
    return 0;
}