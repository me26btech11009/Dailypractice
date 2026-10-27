/*
QUESTON-
A small patient monitor uses a sensor attached to the skin. Before
recording a reading, it checks its battery level and sensor signal strength.

The monitor is ready when both conditions are satisfied:
- The battery level is at least 20%.
- The sensor signal strength is at least 70%.

Write a C program that reads these two values and prints the required action.

Use the following rules:
- If the battery level is at least 20 and the signal strength is at least 70,
  print: Ready
- If the battery level is below 20 and the signal strength is at least 70,
  print: Charge battery
- If the battery level is at least 20 and the signal strength is below 70,
  print: Adjust sensor
- If the battery level is below 20 and the signal strength is below 70,
  print: Charge battery and adjust sensor


INPUT FORMAT
Two integers on one line, separated by a space:

    battery signal

Both values are percentages.

CONSTRAINTS
0 <= battery <= 100
0 <= signal <= 100

The input is valid; no input validation is required.

OUTPUT FORMAT
Print exactly one of the following messages on one line:

Ready
Charge battery
Adjust sensor
Charge battery and adjust sensor

Use the spelling and capitalization shown above. Do not print prompts or
additional text.

SAMPLE INPUT
15 60

SAMPLE OUTPUT
Charge battery and adjust sensor

EXPLANATION
The battery level is below 20% and the signal strength is below 70%,
so both actions are needed.
*/

#include<stdio.h>
int main(){
    int b,s;
    scanf("%d %d",&b,&s);
    if(b>=20 && s>=70){
        printf("Ready\n");
    }
    else if(b<20 && s>=70){
        printf("Charge battery\n");
    }
    else if(b>=20 && s<70){
        printf("Adjust sensor\n");
    }
    else{
        printf("Charge battery and adjust sensor");
    }
    return 0;
}