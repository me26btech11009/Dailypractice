#include <stdio.h>

int main() {
    double r;
    int n = 0;
    double amount = 1.0;

    printf("Enter the annual rate of interest (r): ");
    scanf("%lf", &r);

    if (r <= 0) {
        printf("Rate of interest must be greater than 0.\n");
        return 0;
    }

    while (amount < 2.0) {
        amount = amount * (1 + r / 100);
        n++;
    }

    printf("Number of years required = %d\n", n);

    return 0;
}
