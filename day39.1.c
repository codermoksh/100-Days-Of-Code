/*Q77: Check if the elements on the diagonal of a matrix are distinct.*/

#include <stdio.h>

int main()
{
    int m;
    int i,j;
    int arr[10][10];
    int dig[10];
    int isdistinct = 1;

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
        for(j=i+1; j<m; j++)
        {
            if(dig[i]==dig[j])
            {
                isdistinct = 0;
                break;
            }
        }
        if(!isdistinct)
        {
            break;
        }
    }

    if(isdistinct)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;

}