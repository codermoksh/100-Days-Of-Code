/*Q28: Write a program to print the product of even numbers from 1 to n
*/

#include <stdio.h>

int main()
{
    int n, i;
    int product = 1;

    printf("enter n: ");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        if(n%2==0)
        {
            product *= i;
        }  
    }
    printf("the product of first 'n' even numbers is %d\n",product);
    return 0;
}