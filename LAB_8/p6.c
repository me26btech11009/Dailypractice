/*
QUESTION-
Read two integers a and b.

Create an integer pointer p.
- If a < b, make p point to a.
- Otherwise, make p point to b.

Then add 10 to the variable pointed to by p.
Do not add 10 directly to a or b.

Finally, print the values of a and b.

INPUT
    Two integers a and b.

OUTPUT
    Print the final values of a and b, separated by a space.

EXAMPLE

    Input
    7 12

    Output
    17 12
*/

#include <stdio.h>

int main() {
    int a, b;
    int *p;

    scanf("%d %d", &a, &b);

    /* Make p point to the smaller variable.
       If a and b are equal, make p point to b. */
    if(a<b){
        p=&a;
    }
    else{
        p=&b;
    }

    /* Add 10 to the variable pointed to by p. */
    *p=*p+10;

    printf("%d %d\n", a, b);

    return 0;
}
