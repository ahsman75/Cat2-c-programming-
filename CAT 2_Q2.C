/*Emmanuel Mulei Nzuki
 CT101 /G/26526/25
 question 2  */

#include <stdio.h>

int main() {
    float hours, rate, grossPay, tax, netPay;
    float overtimeHours, regularPay, overtimePay;

    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay
    if (hours > 40) {
        overtimeHours = hours - 40;
        regularPay = 40 * rate;
        overtimePay = overtimeHours * rate * 1.5; 
        grossPay = regularPay + overtimePay;
    } else {
        grossPay = hours * rate;
    }

    //  tax
    if (grossPay <= 600) {
        tax = 0.15 * grossPay;
    } else {
        tax = (0.15 * 600) + (0.20 * (grossPay - 600));
    }

    // net pay
    netPay = grossPay - tax;

    
    printf("\nGross Pay: $%.2f", grossPay);
    printf("\nTaxes: $%.2f", tax);
    printf("\nNet Pay: $%.2f\n", netPay);

    return 0;
}


    