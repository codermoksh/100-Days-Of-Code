/*Q109: Write a program to take an integer array arr and an integer
k as inputs. Print the maximum sum of all the subarrays of size k.*/

#include <stdio.h>

int main()
{
    int n, k, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    int max_sum = 0;

    if (k > n)
    {
        printf("Invalid input! k cannot be greater than array size.");
        return 0;
    }

    for (i = 0; i <= n - k; i++)
    {
        int current_sum = 0;
        for (j = i; j < i + k; j++)
        {
            current_sum += arr[j];
        }

        if (i == 0 || current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);

    return 0;
}