/*Q4: Write a program to calculate the area and circumference of a circle given its radius.
*/

#include <stdio.h>

int main()
{
    float radius;
    printf("enter radius: ");
    scanf("%f",&radius);

    float area = 3.14*(radius*radius);
    printf("area of circle: %f\n",area);

    float circum = 2*3.14*radius;
    printf("circumference of circle: %f\n",circum);

    return 0;
}