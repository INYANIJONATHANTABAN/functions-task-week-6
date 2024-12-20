#include <stdio.h>

void calculateDepreciation() {
    float cost = 10000000;
    float residualValue = 2000000;
    int usefulLife = 5;
    float depreciation = (cost - residualValue) / usefulLife;

    printf("Annual Depreciation: UGX %.2f\n", depreciation);
}

int main() {
    calculateDepreciation();
    return 0;
}