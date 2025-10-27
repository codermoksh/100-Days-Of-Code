/*Q78: Find the sum of main diagonal elements for a square matrix.*/

#include <stdio.h>

int main()
{
    int m;
    int i,j;
    int arr[10][10];
    int dig[10];
    int sum;

    printf("order of matrix: ");
    scanf("%d %d", &m, &m);

    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("element[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        dig[i] = arr[i][i];
    }

    for(i=0; i<m; i++)
    {
        sum += dig[i];
    }

    printf("sum of the diagonal of matrix is %d\n", sum);
    return 0;
}