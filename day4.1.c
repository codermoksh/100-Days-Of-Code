/*Q7: Write a program to swap two numbers without using a third variable.
*/

#include <stdio.h>

int main()
{
     int a ,b ;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);

    a= a+b;
    b= a-b;
    a= a-b;

    printf("after swapping:\n");
    printf("%d ",a);
    printf("%d\n",b);
}