/*Q36: Write a program to find the HCF (GCD) of two numbers.*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("enter two number :");
    scanf("%d %d",&a ,&b);

    while( a != b )
    {
        if( a>b )
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    
    printf("hcf = %d\n",a);
    return 0;
}