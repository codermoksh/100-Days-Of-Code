/*Q29: Write a program to calculate the factorial of a number.
*/

#include <stdio.h>

int main()
{
    int n,i;
    int factorial = 1;

    printf("enter n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        factorial *= i;
    }
    printf("fatorial of n is %d\n",factorial);
    return 0;
}