/*Q76: Check if a matrix is symmetric.*/

#include <stdio.h>

int main()
{
    int m,n;
    int i,j;
    int arr[10][10];
    int transpose[10][10];
    int issymmatric = 1;

    printf("order of the matrix: ");
    scanf("%d %d", &m, &n);

    if(m!=n)
    {
        printf("matrix can't be symmatric");
        return 0;
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i][j] != transpose[i][j])
            {
                issymmatric = 0;
                break;
            }
        }
    }

    if(issymmatric)
    {
        printf("matrix is symmatric\n");
    }
    else
    {
        printf("matrix is not symmatric\n");
    }
    return 0;
}