/*Q148: Take two structs as input and check if they are identical.*/

#include <stdio.h>
#include <string.h>

enum Result
{
    SAME, DIFFERENT
};

struct Student
{
    char name[50];
    int roll;
    int marks;
};

enum Result compare(struct Student s1, struct Student s2)
{
    if (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks)
    {
        return SAME;
    }
    else
    {
        return DIFFERENT;
    }
}

int main()
{
    struct Student s1, s2;

    printf("Enter Student 1 (Name Roll Marks): ");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    printf("Enter Student 2 (Name Roll Marks): ");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    enum Result res = compare(s1, s2);

    if (res == SAME)
        printf("Same\n");
    else
        printf("Different\n");

    return 0;
}