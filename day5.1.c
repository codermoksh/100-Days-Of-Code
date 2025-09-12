/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float P, R, T;
    float SI, CI;

    printf("enter principal, rate, time: ");
    scanf("%f %f %f",&P, &R, &T);

    SI = (P*R*T)/100;
    printf("simple interest is %f\n",SI);

    CI = (P * pow((1+ R/100), T)) - P;
    printf("compound interest is %f\n",CI);

    return 0;
}