#include <stdio.h>

void calculateROI() {
    float investment = 10000000;
    float profit = 12000000 - investment;
    float ROI = (profit / investment) * 100;

    printf("Return on Investment (ROI): %.2f%%\n", ROI);
}

int main() {
    calculateROI();
    return 0;
}