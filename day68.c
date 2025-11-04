/*Q118: Write a program to take an input array of size n. The array should
contain all the integers between 0 to n except for one. Print that missing number*/

#include <stdio.h>

int main()
{
    int n, sum = 0, expected_sum;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements (numbers between 0 to %d, one missing): ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expected_sum = n * (n + 1) / 2;

    printf("Missing number is: %d\n", expected_sum - sum);

    return 0;
}