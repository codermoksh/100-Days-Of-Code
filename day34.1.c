/*Q67: Insert an element in an array at a given position.*/

#include <stdio.h>

int main()
{
    int n, i, key, pos;
    int arr[100];

    printf("enter the number of elements:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&arr[i]);
    }

    printf("enter the position for the element: ");
    scanf("%d",&pos);
    
    printf("enter the element to insert: ");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
        if(pos == i)
        {
            arr[i]=key;
            break;
        }
    }

    printf("printing array after insertion:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    return 0;
}