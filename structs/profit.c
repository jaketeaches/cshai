#include "stdio.h"

int calc_profit(int gross_revenue, int material_costs, int wages)
{
    return gross_revenue - material_costs - wages;
}

int main()
{
    int gross_revenue[]  = {54, 9, 63, 36, 93, 78, 10};
    int material_costs[] = {20, 0, 0, 5, 0, 0, 0};
    int wages[]          = {10, 10, 10, 10, 20, 10, 10};
    //                                      ^ thursday was busy, had to hire help

    int profit_sunday = calc_profit(gross_revenue[0], material_costs[0], wages[0]);
    printf("profit for Sunday: $%d", profit_sunday);
}
