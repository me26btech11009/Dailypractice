/*
QUESTION-
Read the current time and a nonnegative integer N, the number of minutes
to advance. Display the time N minutes later using a 24-hour clock.
Time wraps around after midnight. You may assume that the input is valid.
Importantly, N < 1440 (number of minutes in a day).

INPUT
Three space-separated integers H M N, where H and M are the current hour
and minute, respectively, and N is the number of minutes to advance.

Constraints:
0 <= H <= 23
0 <= M <= 59
0 <= N < 1440

OUTPUT
Print the resulting time in HH:MM format, with exactly two digits for
both the hour and the minute. For example, print 03:07 rather than 3:7.
Do not print any prompts or additional text.

Formatting note: In printf, %02d prints an integer using at least two
positions, adding a leading zero when needed.

EXAMPLE
Input
23 45 30

Output
00:15

Explanation
After 15 minutes it is midnight (00:00). Another 15 minutes makes the
time 00:15 on the next day.
*/

#include <stdio.h>

int main(void)
{
    int h, m, n;

    /* Read the input. */
    scanf("%d %d %d",&h,&m,&n);

    /* Compute and display the resulting time. */
    if(n>60){
        h+=(n/60);
        n=n%60;
    }
    if(m+n>60){
        h++;
        m=(m+n-60);
    }
    else{
        m+=n;
    }
    
    if(h>23){
        h=h-24;
    }
    
    printf("%02d:%02d",h,m);
    
    return 0;
}
