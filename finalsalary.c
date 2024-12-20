#include <stdio.h>

void calculateFinalSalary() {
    float originalSalary = 5000000;
    float taxRate = 0.15;
    float finalSalary = originalSalary - (originalSalary * taxRate);

    printf("Final Salary After Tax: UGX %.2f\n", finalSalary);
}

int main() {
    calculateFinalSalary();
    return 0;
}