/*Q63: Merge two arrays. */

#include <stdio.h>

int main()
{
    int A, B, i, j;
    int arr_A[100];
    int arr_B[100];
    int arr_C[100];
    
    printf("enter the number of elements to enter in array A and B:");
    scanf("%d %d", &A, &B);

    for(i=0; i<A; i++)
    {
        printf("enter the element(for array A): ");
        scanf("%d",&arr_A[i]);
    }
    for(i=0; i<B; i++)
    {
        printf("enter the element(for array B): ");
        scanf("%d",&arr_B[i]);
    }
    
    for(i=0; i<A; i++)
    {
        arr_C[i]= arr_A[i];
    }
    for(j=0; j<B; j++)
    {
        arr_C[i+j]= arr_B[j];
    }

    printf("printing the array after merging:\n");
    for(i=0; i<(A+B); i++)
    {
        printf("%d ",arr_C[i]);
    }
    printf("\n");

    return 0;
}