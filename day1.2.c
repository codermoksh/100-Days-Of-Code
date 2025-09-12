/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
*/

#include <stdio.h>

int main()
{
    int a,b;
    printf("enter both a, b: ");
    scanf("%d %d",&a, &b);

    int sum = a+b;
    printf("sum of a and b is %d\n",sum);

    int diff = a-b;
    printf("difference of a and b is %d\n",diff);

    int prod = a*b;
    printf("product of a and b is %d\n",prod);

    int quot = a/b;
    printf("quotient of a and b is %d\n",quot);
    
    return 0;
}