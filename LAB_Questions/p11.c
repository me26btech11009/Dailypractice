/*
QUESTION-
A chemical plant makes a product using n different ingredients. The recipe
specifies how many grams of each ingredient are needed for one batch.
The plant also knows how many grams of each ingredient are currently available.

Write a C program to determine the maximum number of complete batches that
can be produced using the available ingredients.

Every batch must contain the required amount of every ingredient. Ingredients
cannot replace one another, and partially completed batches do not count.
Unused ingredients may be left over.

INPUT FORMAT

The first line contains an integer n, the number of ingredients.
The second line contains n integers: the amounts required for one batch,
in grams, for ingredients 1 through n.
The third line contains n integers: the amounts available, in grams, for
ingredients 1 through n, in the same order.

CONSTRAINTS

- 1 <= n <= 100
- Each required amount is an integer between 1 and 1000000, inclusive.
- Each available amount is an integer between 1 and 1000000, inclusive.
- All input values satisfy the constraints; input validation is not required.

OUTPUT FORMAT

Print one integer: the maximum number of complete batches that can be produced.
Print 0 if there are not enough ingredients to make even one complete batch.

SAMPLE INPUT 1
3
2 3 5
17 20 26

SAMPLE OUTPUT 1
5

EXPLANATION
One batch requires 2 grams of ingredient 1, 3 grams of ingredient 2, and
5 grams of ingredient 3.

Five batches require:
- 10 grams of ingredient 1; 17 grams are available.
- 15 grams of ingredient 2; 20 grams are available.
- 25 grams of ingredient 3; 26 grams are available.

Therefore, five complete batches can be made. Six batches would require
30 grams of ingredient 3, but only 26 grams are available. The maximum
number of complete batches is therefore 5.

SAMPLE INPUT 2
2
4 6
3 20

SAMPLE OUTPUT 2
0

EXPLANATION
One batch needs 4 grams of ingredient 1, but only 3 grams are available.
Although there is enough of ingredient 2, no complete batch can be made.
*/

#include <stdio.h>

int main(void)
{
    int n;
    int required[100], available[100];

    /* Read the input. */
    scanf("%d",&n);
    for(int i=0; i<n ;i++){
        scanf("%d",&required[i]);
    }
    for(int j=0; j<n ;j++){
        scanf("%d",&available[j]);
    }

    /* Determine and print the maximum number of complete batches. */
    int min=1000;
    for(int l=0 ;l<n ;l++){
        if((available[l]/required[l])<=min){
            min=(available[l]/required[l]);
        }
    }
    printf("%d",min);
    return 0;
}
