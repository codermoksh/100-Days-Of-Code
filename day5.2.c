/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/

#include <stdio.h>

int main()
{
    int total_sec, hrs, mins, sec;
    printf("enter time in seconds :");
    scanf("%d",&total_sec);

    hrs = total_sec / 3600;
    mins = (total_sec % 3600) / 60;
    sec =  total_sec % 60;

    printf("%d : %d : %d\n", hrs, mins, sec);

    return 0;
}