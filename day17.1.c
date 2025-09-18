/*Q33: Write a program to check if a number is an Armstrong number.*/

#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) 
    {
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
        num = num / 10;
    }

    if(result == original)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    return 0;
}
