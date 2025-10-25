/*Q41: Write a program to swap the first and last digit of a number. */

#include <stdio.h>

int main() {
    int num, first, last, digits = 1, temp, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10) 
    {
        temp /= 10;
        digits *= 10;
    }
    first = temp;

    if (num < 10) 
    {
        swapped = num;
    } 
    else
    {
        swapped = last * digits + (num % digits - last) + first;
    }

    printf("After swapping first and last digit: %d\n", swapped);
    return 0;
}
