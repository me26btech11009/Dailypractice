/*
QUESTION-
A heated metal block is placed in a room maintained at 20 degrees Celsius.
During each minute, the block loses 25% of the difference between its
current temperature and the room temperature.

Its temperature after each minute is therefore:

    new_temperature = 20 + 0.75 * (old_temperature - 20)

Given the initial temperature and a target temperature, write a C program
to find the minimum number of whole minutes needed for the block's
temperature to become at most the target.

Use a double variable to store the changing temperature. Do not round the
temperature during the calculation.

INPUT FORMAT

The input contains two double values C and T: the initial temperature and the
target temperature, in degrees Celsius.

CONSTRAINTS

    20 < T < C <= 100

OUTPUT FORMAT

Print one integer: the minimum number of minutes.
Do not print prompts or additional text.

SAMPLE INPUT

80 40

SAMPLE OUTPUT

4

EXPLANATION

After successive minutes, the temperatures are 65, 53.75, 45.3125, and
38.984375 degrees Celsius. The temperature first becomes at most 40
degrees after 4 minutes.
*/

#include <stdio.h>

int main(void)
{
    /* Read the initial and target temperatures. */
    double C,T;
    scanf("%lf %lf",&C,&T);
   
   
    /* Make the necessary computations */
    int t=0;
    double old_temp;
    old_temp=C;
    while(old_temp>T){
        double new_temp=20 + 0.75*(old_temp-20);
        old_temp=new_temp;
        t++;
    }
    /* Print the number of elapsed minutes. */
    printf("%d",t);
    return 0;
}