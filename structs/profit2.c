#include "stdio.h"

struct Report
{
    int gross_revenue;
    int material_costs;
    int wages;
};

int calc_profit(struct Report report)
{
    return report.gross_revenue - report.material_costs - report.wages;
}

int main()
{
    struct Report reports[] = {
        {54, 20, 10}, // Sunday
        {9, 0, 10},   // Monday
        {63, 0, 10},  // Tuesday
        {36, 5, 10},  // Wednesday
        {93, 0, 20},  // Thursday
        {78, 0, 10},  // Friday
        {10, 0, 10}   // Saturday
    };

    int profit_sunday = calc_profit(reports[0]);
    printf("profit for Sunday: $%d", profit_sunday);
}
