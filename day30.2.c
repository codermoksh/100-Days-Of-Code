/* Count positive, negative, and zero elements in an array. 
*/

#include <stdio.h>

int main()
{
    int n,i;
    int arr[100];
    int pos, neg, zero;

    printf("enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            neg++;
        }
        else if(arr[i] > 0)
        {
            pos++;
        }
        else
        {
            zero++;
        }
    }
    printf("positive elements = %d\nnegative elements = %d\nzeroes = %d\n",pos ,neg, zero);
    return 0;
}