/*Q79: Perform diagonal traversal of a matrix.*/

#include <stdio.h>

int main() {
    int n, m;
    int arr[10][10];
    int i, j;

    printf("order of matrix: ");
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("element[%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int k = 0; k < m; k++)
    {
        i = 0;
        j = k;
        while (i < n && j >= 0)
        {
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
    }

    for (int k = 1; k < n; k++)
    {
        i = k;
        j = m - 1;
        while (i < n && j >= 0)
        {
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
