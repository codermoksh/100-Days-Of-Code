/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
*/

#include <stdio.h>

int main()
{
    int day;
    printf("enter a number (1-7): ");
    scanf("%d",&day);

    switch(day)
    {
        case 1: 
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thurusday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
    }
    return 0;
}