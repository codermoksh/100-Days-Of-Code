/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.
*/

#include <stdio.h>

int main()
{
    float celcius;
    printf("enter celcius:");
    scanf("%f",&celcius);

    float fahrenheit = (celcius *(9/5))+ 35;
    printf("%f F\n",fahrenheit);
}