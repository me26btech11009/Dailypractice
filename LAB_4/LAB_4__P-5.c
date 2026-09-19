#include <stdio.h>

int main() {
    int x = 6;   // Store a positive integer from 1 to 10
    int guess;

    printf("Guess the value of x (1 to 10): ");
    scanf("%d", &guess);

    while (guess != x) {
        printf("Wrong answer! Try again.\n");
        printf("Guess again: ");
        scanf("%d", &guess);
    }

    printf("You got it!\n");

    return 0;
}
