/*Q75: Add two matrices.*/

#include <stdio.h>

int main()
{
    int m,n,p,q;
    int i,j;
    int arr_A[10][10];
    int arr_B[10][10];
    int arr_sum[20][20];

    printf("order of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("order of first matrix: ");
    scanf("%d %d", &p, &q);

    if(m!=p || n!=q)
    {
        printf("error! matrix can't be added");
        return 0;
    }
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("element A[%d][%d]: ",i,j);
            scanf("%d",&arr_A[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("element B[%d][%d]: ",i,j);
            scanf("%d",&arr_B[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            arr_sum[i][j]= arr_A[i][j] + arr_B[i][j];
        }
    }

    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d ", arr_sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}