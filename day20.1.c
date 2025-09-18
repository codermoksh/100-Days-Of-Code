/*Q39: Write a program to find the product of odd digits of a number.*/

#include <stdio.h>

int main()
{
    int n, remainder, product=1, odd=0;

    printf("enter the number :");
    scanf("%d",&n);

    while(n > 0)
    {
        remainder = n % 10;
        if(remainder % 2 != 0)
        {
            product *=remainder ;
            odd = 1;
        }
        n /= 10 ;
    }
    if(odd)
    {
        printf("Product of odd digits = %d\n",product);
    }
    else
    {
        printf("no odd digit found");
    }
    return 0;
}