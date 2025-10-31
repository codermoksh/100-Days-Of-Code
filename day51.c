/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target)
as inputs.The elements in the sorted array might be repeated. You need to print the first
and last occurrence of the target and print the index of first and last occurrence.
Print -1, -1 if the target is not present.*/

#include <stdio.h>

int main()
{
    int n, i;
    int target;
    int nums[100];
    int first, last;

    printf("enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("enter the elemnts: ");
        scanf("%d",&nums[i]);
    }

    printf("enter the target: ");
    scanf("%d",&target);

    for(i=0; i<n; i++)
    {
        if(nums[i] == target)
        {
            first = i;
            break;
        }
    }

    for(i=n-1; i>=0; i--)
    {
        if(nums[i] == target)
        {
            last = i;
            break;
        }
    }

    printf("%d %d\n", first, last);
    return 0;
}