/* Count even and odd numbers in an array.
*/

#include <stdio.h>

int main()
{
    int n,i;
    int arr[100];
    int even, odd;

    printf("enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("odd elements = %d\neven elements = %d \n", odd,even);
    return 0;
}