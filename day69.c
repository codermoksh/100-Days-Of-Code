/*Q119: Write a program to take an integer array as input. Only one element
will be repeated. Print the repeated element. Try to find the result in one
single iteration.*/

#include <stdio.h>

int findRepeated(int nums[], int n)
{
    int seen[1000] = {0};

    for (int i = 0; i < n; i++)
    {
        if (seen[nums[i]] == 1)
        {
            return nums[i];
        }
        seen[nums[i]] = 1;
    }

    return -1;
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int repeated = findRepeated(nums, n);
    printf("Repeated element: %d\n", repeated);

    return 0;
}