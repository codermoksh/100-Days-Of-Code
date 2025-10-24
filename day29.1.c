/* Find the sum of array elements.
*/

#include <stdio.h>

int main()
{
    int n,i;
    int arr[100];

    printf("enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&arr[i]);
    }
    
    int sum=0;
    for(i=0; i<n; i++)
    {
        sum += arr[i];
    }
    printf("%d\n",sum);
    return 0;
    
}