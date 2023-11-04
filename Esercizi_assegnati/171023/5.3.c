#include <stdio.h>

int main(void) {
    float shares, pps, value;
    printf("Enter the number of shares: ");
    scanf("%f",&shares);
    printf("Enter the price per share: ");
    scanf("%f",&pps);
    value=shares*pps;
    if (value<2500.00f) value=30.00f+(value*0.017f);
    else if (value<6250.00f) value=56.00f+(value*0.0066f);
    else if (value<20000.00f) value=76.00f+(value*0.0034f);
    else if (value<50000.00f) value=100.00f+(value*0.0022f);
    else if (value<500000.00f) value=155.00f+(value*0.0011f);
    else value=255.00f+(value*0.0009f);
    if (value<39.00f) value=39.00f;
    if (shares<2000.00f) shares=33.00f+(shares*0.03f);
    else shares=33.00f+(shares*0.02f);
    printf("Value with commissions: %.2f$\nRival value with commissions: %.2f$\n", value,value2);
}