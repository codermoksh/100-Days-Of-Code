/*Q37: Write a program to find the LCM of two numbers.*/

#include <stdio.h>

int main()
{
    int a, b, x, y, lcm, hcf;
    printf("enter two number: ");
    scanf("%d %d",&a, &b);

    x = a;
    y = b;

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
    hcf = a;

    lcm = (x*y)/hcf;
    printf("lcm of %d and %d is %d\n",x ,y ,lcm);

    return 0;
}