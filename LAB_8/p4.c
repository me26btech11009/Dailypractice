
/*
QUESTION-
SECONDS ELAPSED

A time duration is given using hours, minutes, and seconds.
All three quantities are non-negative.

Write a C program that reads the three values as unsigned integers
and prints the total duration in seconds.

Input
-----
Three unsigned integers:
hours minutes seconds

You may assume that:
0 <= minutes < 60
0 <= seconds < 60

Output
------
Print the total number of seconds.

Example

    Input
    1 2 30

    Output
    3750
*/

#include <stdio.h>

int main() {
    unsigned int hours, minutes, seconds;
    unsigned int totalSeconds;

    /* Read input here. The format specifier is %u. */
    scanf("%u %u %u",&hours,&minutes,&seconds);
    
    /* Compute and print totalSeconds here */
    totalSeconds=hours*60*60+minutes*60+seconds;
    printf("%u",totalSeconds);

    return 0;
}