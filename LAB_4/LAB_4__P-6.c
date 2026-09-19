#include <stdio.h>

int main() {
    int number;

    printf("Enter a 5-digit integer: ");
    scanf("%d", &number);

    // Dividing by 10 separates the quotient and remainder
    int quotient = number / 10;
    int remainder = number % 10;

    printf("Original number: %d\n", number);
    printf("Divided by 10 (Quotient): %d\n", quotient);
    printf("Remainder when divided by 10: %d\n", remainder);

    return 0;
}