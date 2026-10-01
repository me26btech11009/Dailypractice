/*
QUESTION-
There are n treasure chests. The number of gold coins in each chest is stored in an array.

Exactly one chest is cursed: the chest containing the fewest coins.

Use a pointer to keep track of the chest with the fewest coins while scanning
the array. After finding it, remove all its coins by setting its value to 0.

Print the updated array.

You may assume that exactly one chest has the minimum number of coins.

INPUT
    The first line contains an integer n.
    The second line contains n integers, where the i-th integer is the number of
    coins in the i-th chest.

OUTPUT
    Print the updated array after setting the number of coins in the cursed chest
    to 0.

EXAMPLE

    Input:
    5
    12 7 15 3 9

    Output:
    12 7 15 0 9
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int coins[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }

    int *pmin = &coins[0];

    /* Scan the array.
       Make pmin point to the chest with the fewest coins. */
    for(int i=0; i<n ;i++){
        if(coins[i]<*pmin){
            pmin=&coins[i];
        }
    }


    /* Remove all coins from the cursed chest. */
    *pmin=0;

    for (int i = 0; i < n; i++) {
        printf("%d", coins[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
