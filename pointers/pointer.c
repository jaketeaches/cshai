#include "stdio.h"

void show_readings(int spirit, int spirometer)
{
    printf("The current Christmas Spirit level is: %d\n", spirit);
    printf("The Spirometer reads: %d\n", spirometer);
}

int main()
{
    // Current Christmas Spirit measurment
    int christmas_spirit = 132185;
    int spirometer       = christmas_spirit;

    show_readings(christmas_spirit, spirometer);

    // All the children find out that Santa isn't real
    christmas_spirit = 0;

    show_readings(christmas_spirit, spirometer);
}
