/*Q144: Write a function that accepts a structure as parameter and prints its members.*/

#include <stdio.h>

enum Action { PRINT_STUDENT };

struct Student
{
    char name[50];
    int roll;
    int marks;
};

void display(struct Student s, enum Action act)
{
    if (act == PRINT_STUDENT)
    {
        printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
    }
}

int main()
{
    struct Student st;
    enum Action task = PRINT_STUDENT;

    printf("enter name, roll_no, marks:");
    scanf("%s %d %d", st.name, &st.roll, &st.marks);

    display(st, task);

    printf("\n");
    return 0;
}
