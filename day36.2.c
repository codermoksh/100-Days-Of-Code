/*Q72: Find the sum of all elements in a matrix.*/

#include <stdio.h>

int main()
{
    int m,n;
    int arr[100][100];
    int i,j;

    printf("order of matrix: ");
    scanf("%d %d",&m,&n);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int sum=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("sum of the elements of matrix is %d\n",sum);
    return 0;
}