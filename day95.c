/*Q145: Return a structure containing top student's details from a function.*/

#include <stdio.h>

enum Operation
{
    FIND_TOPPER
};

struct Student
{
    char name[50];
    int roll;
    int marks;
};

struct Student process(struct Student s[], int n, enum Operation op)
{
    if (op == FIND_TOPPER)
    {
        int maxIndex = 0;

        for (int i = 1; i < n; i++)
        {
            if (s[i].marks > s[maxIndex].marks)
            {
                maxIndex = i;
            }
        }

        return s[maxIndex];
    }

    struct Student empty = {"", 0, 0};
    return empty;
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    enum Operation task = FIND_TOPPER;

    printf("Enter details (Name Roll Marks):\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = process(s, n, task);

    printf("Top Student: %s | Roll: %d | Marks: %d", top.name, top.roll, top.marks);

    printf("\n");
    return 0;
}