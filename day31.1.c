/*Q61: Search for an element in an array using linear search.
*/

#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];

    printf("enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&arr[i]);
    }

    int key, found=0;

    printf("enter the element to find: ");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            printf("found the %d at index %d\n",key,i);
            found = 1;
            break;
        }
    }
    if(found==0)
    {
        printf("error! element not found\n");
    }
    return 0;

}