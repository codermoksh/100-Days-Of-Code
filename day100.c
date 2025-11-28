/*Q150: Use pointer to struct to modify and display data using -> operator.*/

#include <stdio.h>

enum Field
{
    NAME, ROLL, MARKS
};

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s;
    struct Student *ptr = &s;

    printf("Student pointer modifying values: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    enum Field f;

    f = NAME;

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
