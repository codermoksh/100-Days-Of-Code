/*Q66: Insert an element in a sorted array at the appropriate position.*/

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

    printf("enter the element to insert: ");
    scanf("%d",&key);

    pos = n;
    for(i=0; i<=n; i++)
    {
        if(key < arr[i])
        {
            pos=i;
            break;
        }
    }

    for(i=n; i>pos; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos]=key;
    n++;

    printf("printing array after insertion:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}