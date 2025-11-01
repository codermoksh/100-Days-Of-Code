/*Q104: Write a Program to take a positive integer n as input, and find the
pivot integer x such that the sum of all elements between 1 and x inclusively
equals the sum of all elements between x and n inclusively. Print the pivot
integer x. If no such integer exists, print -1. Assume that it is guaranteed
that there will be at most one pivot integer for the given input.*/

#include <stdio.h>

int main()
{
    int n, i, x;
    int found = 0;
    int totalsum = 0;
    int leftsum = 0;
    int rightsum;

    printf("enter n: ");
    scanf("%d",&n);

    totalsum = n * (n+1) / 2;

    for(x=1; x<=n; x++)
    {
        leftsum = x * (x+1) / 2;
        
        rightsum = totalsum - leftsum + x;

        if(leftsum == rightsum)
        {
            printf("%d\n",x);
            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("-1\n");
    }

    return 0;
}