/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform
operations using switch.*/

#include <stdio.h>
#include <string.h>

enum Choice
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    char op[10];
    int a, b;
    enum Choice choice;

    printf("enter the operator, frist and second number: ");
    scanf("%s %d %d", op, &a, &b);

    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else
        choice = MULTIPLY;

    switch (choice)
    {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}