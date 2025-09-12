/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include <stdio.h>

int main()
{
    int length;
    int width;
    printf("length and width :");
    scanf("%d %d",&length, &width);

    int area = length * width;
    printf("arae of rectangle is %i\n",area);

    int perimeter = 2 * (length + width);
    printf("perimeter of rectangle is %i\n",perimeter);

    return 0;
}