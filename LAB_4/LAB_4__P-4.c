#include <stdio.h>

int main() {
    int n, num, max;

    // Accept the number of numbers
    printf("Enter n: ");
    scanf("%d", &n);

    // Accept the first number and make it the maximum
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;

    // Accept the remaining numbers
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Update maximum if necessary
        if (num > max) {
            max = num;
        }
    }

    // Print the maximum
    printf("Maximum = %d\n", max);

    return 0;
}
