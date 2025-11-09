/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all
integers, compute their sum and average, and print both.*/

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    int num, count = 0;
    int sum = 0;
    float average;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0)
    {
        printf("No numbers found in the file.\n");
        return 0;
    }

    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
