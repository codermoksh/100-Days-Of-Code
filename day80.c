/*Q130: Store multiple student records (name, roll number, marks) into a file using
fprintf(). Then read them using fscanf() and display each record.*/

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100] = "students.txt";
    char name[50];
    int roll, marks;
    int n, i;

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not create file %s\n", filename);
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(file, "%s %d %d\n", name, roll, marks);
    }

    fclose(file);
    printf("\nData written successfully to %s\n", filename);

    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Could not open file %s for reading\n", filename);
        return 1;
    }

    printf("\nDisplaying student records:\n");
    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}
