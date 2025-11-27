/*Q147: Store employee data in a binary file using fwrite() and read using fread().*/

#include <stdio.h>

enum Action
{
    WRITE_DATA, READ_DATA
};

struct Employee
{
    char name[50];
    int id;
    float salary;
};

int main()
{

    struct Employee e, e_read;
    FILE *fp;

    enum Action task;

    task = WRITE_DATA;

    if (task == WRITE_DATA)
    {
        printf("Enter Employee Name: ");
        scanf("%s", e.name);

        printf("Enter Employee ID: ");
        scanf("%d", &e.id);

        printf("Enter Employee Salary: ");
        scanf("%f", &e.salary);

        fp = fopen("employee.bin", "wb");
        if (fp == NULL)
        {
            printf("File error!");
            return 1;
        }

        fwrite(&e, sizeof(e), 1, fp);
        fclose(fp);

        printf("\nData successfully written to file.\n");
    }

    task = READ_DATA;

    if (task == READ_DATA)
    {
        fp = fopen("employee.bin", "rb");
        if (fp == NULL)
        {
            printf("File error!");
            return 1;
        }

        fread(&e_read, sizeof(e_read), 1, fp);
        fclose(fp);

        printf("\nEmployee Details Read From File:\n");
        printf("Name: %s | ID: %d | Salary: %.2f\n",
               e_read.name, e_read.id, e_read.salary);
    }

    return 0;
}