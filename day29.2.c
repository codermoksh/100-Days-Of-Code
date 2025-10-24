/* Find the maximum and minimum element in an array.
*/

#include <stdio.h>

int main()
{
    int n,i;
    int arr[100];
    int max, min;

    printf("enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&arr[i]);
    }

    max = min = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max=%d, Min=%d\n",max,min);
    return 0;
}