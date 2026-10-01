
/*
QUESTION-
Two positive integers can have a product much larger than either input.
Write a C program that reads two long integers and prints their product.

Input
-----
Two positive integers a and b.

Output
------
Print a * b.

Use the data type long int for a, b, and their product.

 Example

    Input
    50000 60000

    Output
    3000000000
*/

#include <stdio.h>
long int prod(long int a, long int b){
    return a*b;
}

int main() {
    long int a, b;
    long int product;

    /* Read the input here. The format specifier for long is %ld */
    scanf("%ld%ld",&a,&b);
    

    /* Compute product and print */
    product=prod(a,b);
    printf("%ld",product);
    return 0;
}