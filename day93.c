/*Q143: Find and print the student with the highest marks.*/

#include <stdio.h>

enum Operation { FIND_TOPPER };

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    int n;
    printf("enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    enum Operation op = FIND_TOPPER;

    for (int i = 0; i < n; i++)
    {
        printf("enter name, roll_no, marks:");
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

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

        printf("Topper: %s (Marks: %d)\n", s[maxIndex].name, s[maxIndex].marks);
    }

    return 0;
}