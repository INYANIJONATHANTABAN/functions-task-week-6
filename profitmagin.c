#include <stdio.h>

void calculateProfitMargin() {
    float salesRevenue = 30000000;
    float profit = 9000000;
    float profitMargin = (profit / salesRevenue) * 100;

    printf("Profit Margin: %.2f%%\n", profitMargin);
}

int main() {
    calculateProfitMargin();
    return 0;
}