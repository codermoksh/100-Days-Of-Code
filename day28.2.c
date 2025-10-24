/* Read and print elements of a one-dimensional array.
*/

#include <stdio.h>

int main()
{
    int n,i;
    int A[100];
    
    printf("enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&A[i]);
    }
    
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    
    printf("\n");
    return 0;
}