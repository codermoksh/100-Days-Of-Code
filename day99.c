/*Q149: Use malloc() to allocate structure memory dynamically and print details.*/

#include <stdio.h>
#include <stdlib.h>

enum Action
{
    PRINT_STUDENT
};

struct Student
{
    char name[50];
    int roll;
    int marks;
};

void process(struct Student *s, enum Action act)
{
    if (act == PRINT_STUDENT)
    {
        printf("Name: %s | Roll: %d | Marks: %d",s->name, s->roll, s->marks);
    }
}

int main()
{
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    enum Action task = PRINT_STUDENT;

    if (s == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter Student Details (Name Roll Marks): ");
    scanf("%s %d %d\n", s->name, &s->roll, &s->marks);

    process(s, task);

    free(s);
    return 0;
}