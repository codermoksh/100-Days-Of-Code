/*Q1: Write a program to input two numbers and display their sum.
*/

#include <stdio.h>

int main()
{
    int a,b;
    printf("enter both a, b: ");
    scanf("%d %d",&a, &b);

    int sum = a+b;
    printf("sum of a and b is %d\n",sum);

    return 0;
}