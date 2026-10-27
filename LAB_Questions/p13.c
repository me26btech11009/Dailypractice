/*
QUESTION-
An amount of money is to be paid using only notes of the following denominations:

    Rs. 500, Rs. 100, Rs. 50, Rs. 20, Rs. 10

The amount is guaranteed to be a positive multiple of 10.

Write a C program that determines the minimum number of notes of each
denomination needed to pay the amount exactly.


Input Specification
-------------------
The input consists of one positive integer A, the amount to be paid.

A is guaranteed to be a multiple of 10.

Output Specification
--------------------
Print five integers on one line, separated by spaces, giving the number of notes
of denominations Rs. 500, Rs. 100, Rs. 50, Rs. 20 and Rs. 10, in that order.

Example
-------
Input:
1380

Output:
2 3 1 1 1

Explanation:
2 x 500 + 3 x 100 + 1 x 50 + 1 x 20 + 1 x 10 = 1380.
*/

#include <stdio.h>

int main(void) {
    int amount;
    scanf("%d", &amount);

    /* Find the minimum number of notes of each denomination.
       Denominations: 500, 100, 50, 20, 10. */
    int array[6];
    if(amount!=0){
        array[0]=amount/500;
        amount=amount%500;
    }
    if(amount!=0){
        array[1]=amount/100;
        amount=amount%100;
    }
    if(amount!=0){
        array[2]=amount/50;
        amount=amount%50;
    }
    if(amount!=0){
        array[3]=amount/20;
        amount=amount%20;
    }
    if(amount!=0){
        array[4]=amount/10;
        amount=amount%10;
    }
    
    for(int i=0; i<6; i++){
        if(array[i]!='\0'){
            printf(" %d",array[i]);
        }
    }
    
    

    return 0;
}
