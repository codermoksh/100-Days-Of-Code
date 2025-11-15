/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait',
or 'Go' based on its value.*/

#include <stdio.h>
#include <string.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    char input[10];
    enum TrafficLight signal;

    printf("enter the light: ");
    scanf("%s", input);

    if (strcmp(input, "RED") == 0)
    {
        signal = RED;
    }
    else if (strcmp(input, "YELLOW") == 0)
    {
        signal = YELLOW;
    }
    else
    {
        signal = GREEN;
    }

    switch(signal)
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
