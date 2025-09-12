/*Q22: Write a program to find profit or loss percentage given cost price and selling price.
*/

#include <stdio.h>

int main()
{
    float SP, CP, profit, loss, percent;

    printf("enter the selling price :");
    scanf("%f",&SP);

    printf("enter the cost price :");
    scanf("%f",&CP);

    if(SP > CP)
    {
        profit = SP - CP;
        percent = (profit/CP)*100;
        printf("profit = %f\n",percent);
    }
    else if(SP < CP)
    {
        loss = CP - SP;
        percent = (loss/CP)*100;
        printf("loss = %f\n",percent);
    }
    else
    {
        printf("neither profit nor loss\n");
    }
    return 0;
}