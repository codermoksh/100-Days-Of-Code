/*Q68: Delete an element from an array.*/

#include <stdio.h>

int main()
{
    int n, i, pos;
    int arr[100];

    printf("enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&arr[i]);
    }

    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    for(i=pos; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}