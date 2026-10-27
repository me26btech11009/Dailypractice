/*
QUESTION-
A laboratory has two types of resistors, A and B. All type A resistors have
the same resistance, and all type B resistors have the same resistance.

In the first experiment, one type A resistor and one type B resistor are
connected in series across a voltage V1. The measured current is I1.

In the second experiment, one type A resistor and two type B resistors are
connected in series across a voltage V2. The measured current is I2.

Write a C program to determine the resistance of each type of resistor.

ELECTRICAL BACKGROUND
When resistors are connected in series, their resistances add.
Ohm's law states that V = I * R, where V is the voltage in volts, I is the
current in amperes, and R is the total resistance in ohms.
Assume ideal measurements and negligible resistance in wires and sources.

Use this information to formulate the relationships for the two experiments
and calculate the two unknown resistances.

INPUT FORMAT
The first line contains V1 I1.
The second line contains V2 I2.
All four values are real numbers. Voltages are in volts and currents are in
amperes.

OUTPUT FORMAT
Print two real numbers on one line, separated by a space: the resistance of
type A followed by the resistance of type B, both in ohms.
Print exactly four digits after the decimal point. Do not print prompts or
labels.

CONSTRAINTS AND GUARANTEES
0.1 <= V1, V2 <= 1000
0.001 <= I1, I2 <= 100
The measurements correspond to strictly positive resistances for both types, and they determine a unique solution. 
You do not need to validate the input.

SAMPLE INPUT
12 2
20 2.5

SAMPLE OUTPUT
4.0000 2.0000

EXPLANATION
Type A has resistance 4 ohms and type B has resistance 2 ohms.
The first arrangement has total resistance 4 + 2 = 6 ohms, so a voltage of
12 volts produces a current of 12 / 6 = 2 amperes.
The second arrangement has total resistance 4 + 2 + 2 = 8 ohms, so a voltage
of 20 volts produces a current of 20 / 8 = 2.5 amperes.
*/

#include <stdio.h>

int main(void)
{
    /* Write your program here. */
    float v1,v2,i1,i2;
    scanf("%f %f",&v1,&i1);
    scanf("%f %f",&v2, &i2);
    
    float a,b;
    a = (2*v1/i1) - (v2/i2) ;
    b=(v2/i2) - (v1/i1) ;
    
    printf("%.4f %.4f",a,b);
    return 0;
}
