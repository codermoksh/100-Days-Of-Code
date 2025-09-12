/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("n :");
    scanf("%d",&n);

    if(n >= 0)
    {
        if(n > 0)
        {
            printf("%d is positive\n",n);
        }
        else
        {
            printf("%d is zero\n",n);
        }
    }
    else{
        printf("%d is negative\n",n);
    }
    
    return 0;
}