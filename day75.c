/*Q125: Open an existing file in append mode and allow the user to enter a new line
of text. Append the text at the end without overwriting existing content.*/

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char text[1000];

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL)
    {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    printf("File updated successfully with appended text.\n");

    fclose(file);
    return 0;
}