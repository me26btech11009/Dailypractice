/*
QUESTION-
A machine records n temperature readings.

The machine is considered safe if every temperature reading is between
20 and 80, inclusive.

Write a C program that reads the temperatures and prints:

"Safe" if all readings are in the safe range, and "Unsafe" otherwise.

Use a variable of type bool to keep track of whether the readings are safe.

Input
-----
The first line contains an integer n, the number of readings.
The second line contains n integers.

Output
------
Print Safe if every reading is between 20 and 80, inclusive.
Otherwise, print Unsafe.

Example 1

    Input
        5
        25 40 60 75 80

    Output
        Safe

Example 2

    Input
        4
        30 50 85 60

    Output
        Unsafe
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int a[100];
    int i;
    bool safe = true;

    scanf("%d", &n);
    

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* Check whether all readings are safe.
       Use the Boolean variable safe. */
    for (i=0;i<n;i++){
        if(a[i]<20 || a[i]>80){
            safe=false;
        }
    }

    if (safe) {
        printf("Safe\n");
    }
    else {
        printf("Unsafe\n");
    }

    return 0;
}
