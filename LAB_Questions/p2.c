/*
QUESTION-
Power Supply Check
---------------------------
A laboratory power supply displays its voltage and current as integers.

For this exercise, the supply is safe when both conditions hold:
- The voltage is between 210 and 240, inclusive.
- The current is at most 10.

Write a C program that checks the readings and prints the appropriate message.

INPUT FORMAT
The input contains two integers: voltage and current.

CONSTRAINTS
0 <= voltage <= 300
0 <= current <= 20

OUTPUT FORMAT
Print exactly one of the following:
SAFE    - both conditions are satisfied.
VOLTAGE - only the voltage condition fails.
CURRENT - only the current condition fails.
BOTH    - both conditions fail.

Do not print prompts or additional text.

SAMPLE INPUT
200 12

SAMPLE OUTPUT
BOTH

EXPLANATION
The voltage is below 210, and the current is above 10.
*/

#include<stdio.h>
int main(){
    int v,c;
    scanf("%d %d",&v,&c);
    if(v>=210 && v<=240 ){
        if(c<=10){
            printf("SAFE");
        }
        else{
            printf("CURRENT");
        }
    }
    else{
        if(c<=10){
            printf("VOLTAGE");
        }
        else{
            printf("BOTH");
        }
    }
    
    return 0;
}