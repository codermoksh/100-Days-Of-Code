/*Q74: Find the transpose of a matrix.*/

#include <stdio.h>

int main() 
{
    int m, n;
    int arr[10][10], transpose[10][10];
    int i, j;

    printf("order of matrix: ");
    scanf("%d %d", &m, &n);

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
