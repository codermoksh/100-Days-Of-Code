/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *.
*/

#include <stdio.h>

int main()
{
    int i, j, space;

    for(i=1; i<=7; i+=2)
    {
        for(space=6; space>=i; space-=2)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(i=5; i>=1; i-=2)
    {
        for(space=i; space<=6; space+=2)
        {
            printf(" ");
        }
        for(j=i; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}