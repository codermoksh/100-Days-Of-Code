/*Q73: Find the sum of each row of a matrix and store it in an array.*/

#include <stdio.h>

int main() {
    int m,n;
    int arr[100][100];
    int rowSum[100];
    int i,j;

    printf("order of the matrix: ");
    scanf("%d %d",&m,&n);

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i=0; i<m; i++)
    {
        rowSum[i] = 0;
        for (j=0; j<n; j++)
        {
            rowSum[i] += arr[i][j];
        }
    }

    for (i=0; i<m; i++)
    {
        printf("%d ",rowSum[i]);
    }
    return 0;
}
