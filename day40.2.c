/*Q80: Multiply two matrices.*/

#include <stdio.h>

int main()
{
    int m,n;
    int p,q;
    int i,j,k;

    printf("order of matrix A: ");
    scanf("%d %d", &m, &n);
    printf("order of matrix B: ");
    scanf("%d %d", &p, &q);

    int arr_A[m][n];
    int arr_B[p][q];
    int arr_C[m][q];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("element[%d][%d]: ", i, j);
            scanf("%d",&arr_A[i][j]);
        }
    }

    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("element[%d][%d]: ", i, j);
            scanf("%d",&arr_B[i][j]);
        }
    }

    if (n!=p)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    for (i=0; i<m; i++)
    {
        for (j=0; j<q; j++)
        {
            arr_C[i][j] = 0;
        }
    }

    for (i = 0; i <m; i++)
    {
        for (j = 0; j <q; j++)
        {
            for (k = 0; k < p; k++)
            {
                arr_C[i][j] += arr_A[i][k] * arr_B[k][j];
            }
        }
    }


    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d ",arr_C[i][j]);
        }
        printf("\n");
    }
    return 0;
}