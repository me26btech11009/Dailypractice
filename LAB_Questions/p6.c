/*
QUESTION-
SYMMETRIC START OF A COLOUR STRIP
-----------------------------------------------------------

A factory produces strips with coloured sections in a line. An inspection
device records the colours as a string:

    R represents red.
    G represents green.
    B represents blue.
    Y represents yellow.

A prefix is a section that starts at the first character of the string.
It may contain the first character, the first two characters, and so on.

A prefix is symmetric if it reads the same from left to right and from
right to left. Such a prefix is also called a palindrome. A single
character is symmetric.

For example, RGBBGR is a symmetric prefix of RGBBGRY.

Write a C program to find the longest symmetric prefix of the input
string. The selected section must start at position 0.

REQUIRED FUNCTION

Write and use this function:

    int is_symmetric(char strip[], int end);

The function must check the characters from position 0 to position end,
including both positions. Positions are numbered from 0.

Return 1 if this prefix is symmetric. Otherwise, return 0.

Do not change the string. Do not read input or print output inside this
function. Read input and print output only in main.

INPUT FORMAT

One non-empty string containing only uppercase R, G, B, and Y.
The string contains no spaces.

CONSTRAINTS

    1 <= string length <= 100

Declare a character array large enough for the terminating null character.
Do not include string.h or use any of its functions.
Nested loops are allowed.

OUTPUT FORMAT

On the first line, print the length of the longest symmetric prefix.
On the second line, print that prefix.

Do not print prompts or additional text.
====================

SAMPLE INPUT
---------------------

RGBBGRY

SAMPLE OUTPUT
--------------------------

6
RGBBGR

EXPLANATION

The first six characters form RGBBGR, which reads the same in both
directions. The complete string RGBBGRY is not symmetric.
*/

#include <stdio.h>

int is_symmetric(char strip[], int end)
{
    /* Check whether the prefix from position 0 to end is symmetric. */
    int k=end;
    int found=0;
    for(int i=0; i<=end; i++){
        for(int j=k; j>=0 ;j--){
            if(strip[i]==strip[j]){
                k=j;
                found=1;
                break;
            }
        }
    }
    /* Return 1 or 0. Avoid performing input/output. here */
    if(found==1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void)
{
    char strip[101];

    /* Read the string and find its length without using string.h. */
    scanf("%s",strip);
    
    int end=0;
    for(int h=0;strip[h]!='\0' ;h++){
        end++;
    }
    
    /* Perform necessary computations using the function */
    int e;
    if(is_symmetric(strip,end)==1){
        for(int f=end; f>=0 ;f--){
            if(strip[0]==strip[f]){
                e=f+1;
                printf("%d\n",e);
                break;
            }
        }
        for(int g=0;g<e;g++){
            printf("%c",strip[g]);
        }
    }
    
    /* Print length output, then print the symmetric prefix on the next line. */

    return 0;
}