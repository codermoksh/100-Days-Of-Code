/*Q71: Read and print a matrix.*/

#include <stdio.h>

int main()
{
    int n,m;
    int arr[100][100];

    printf("enter the order of matrix: ");
    scanf("%d %d",&n,&m);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");
    return 0;
}