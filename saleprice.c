#include <stdio.h>

void calculateSalePrice() {
    float originalPrice = 200000;
    float discountRate = 0.10;
    float salePrice = originalPrice - (originalPrice * discountRate);

    printf("Total Sale Price: UGX %.2f\n", salePrice);
}

int main() {
    calculateSalePrice();
    return 0;
}