/* Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main()
{
    int i, j, space;
    for(i=1; i<=5; i++)
    {
        for(space=0; space<=i; space++)
        {
            printf(" ");
        }
        for(j=i; j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}