/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter 3 sides of triangle:");
    scanf("%i %i %i",&a ,&b ,&c);

    if(a+b>c && b+c>a && a+c>b)
    {
        printf("it is a valid triange\n");
    }
    else
    {
        printf("it is not a valid triangle\n");
    }

    if(a==b && b==c)
    {
        printf("it is a equilateral triangle\n");
    }
    else if(a==b || b==c || a==c)
    {
        printf("it is an isosceles triangle\n");
    }
    else if((a*a + b*b)==(c*c) || (b*b + c*c)== (a*a) || (a*a + c*c)== (b*b))
    {
        printf("it is a ritght angle triangle\n");
    }
    else
    {
        printf("scalene triangle\n");
    }

    return 0;
}