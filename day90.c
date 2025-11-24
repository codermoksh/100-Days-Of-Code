/*Q140: Define a struct with enum Gender and print person's gender.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    enum Gender gender;
};

void toUpperCase(char *s)
{
    for (int i = 0; s[i]; i++)
    {
        s[i] = toupper(s[i]);
    }
}

int main()
{
    struct Person p;
    char input[20];

    printf("Gender: ");
    scanf("%s", input);

    toUpperCase(input);

    if (strcmp(input, "MALE") == 0)
    {
        p.gender = MALE;
    }
    else if (strcmp(input, "FEMALE") == 0)
    {
        p.gender = FEMALE;
    }
    else
    {
        p.gender = OTHER;
    }
    
    switch (p.gender)
    {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}