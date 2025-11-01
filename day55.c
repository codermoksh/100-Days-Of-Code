/*Q105: Write a program to take an integer array nums of size n, and print the
majority element. The majority element is the element that appears strictly more
than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is
not necessarily the element that is present most number of times.*/

#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[100];
    int count;
    int majority = 0;

    printf("enter the number of elements: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("enter the element: ");
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        count = 0;
        for(j=0; j<n; j++)
        {
            arr[i]=arr[j];
            count++;
        }

        if(count > n/2)
        {
            majority = arr[i];
            break;
        }
    }

    printf("%d\n",majority);
    return 0;
}