/*Q27: Write a program to print the sum of the first n odd numbers.
*/

#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    int odd = 0;
    printf("enter n: ");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        sum += odd;
        odd += 2;
    }
    printf("sum of first 'n' odd numbers is %d\n",sum);
    return 0;
}