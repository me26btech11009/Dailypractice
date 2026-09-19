#include <stdio.h>

int main() {
    int n, i;
    float x, power = 1.0;

    // Accept positive integer n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // (a) Print n consecutive *
    printf("\n(a) ");
    for (i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    // (b) Print all square numbers in [1, n]
    printf("(b) ");
    for (i = 1; i * i <= n; i++) {
        printf("%d", i * i);

        if ((i + 1) * (i + 1) <= n) {
            printf(",");
        }
    }
    printf("\n");

    // (c) Accept floating point number x
    printf("(c) Enter a floating point number x: ");
    scanf("%f", &x);

    printf("First %d positive powers of %.3f:\n", n, x);

    power = 1.0;
    for (i = 1; i <= n; i++) {
        power = power * x;
        printf("%.3f", power);

        if (i < n) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
