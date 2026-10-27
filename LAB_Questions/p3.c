/*
QUESTION-
A battery-testing device receives a sequence of commands. For this exercise,
the battery's charge is measured in whole units.

The battery has a maximum capacity of K units and initially contains B units.

Each character in the command string means:
- C: Add one unit of charge.
- D: Remove one unit of charge.

Process the commands from left to right.
- If a C command is received when the battery is full, ignore it.
- If a D command is received when the battery is empty, ignore it.
- An ignored command leaves the charge unchanged. Continue with the next
  command.

Write a C program that prints the final charge and the total number of ignored
commands.

INPUT FORMAT
- The first line contains two integers K and B.
- The second line contains one non-empty command string consisting only of
  C and D, with no spaces.

CONSTRAINTS
1 <= K <= 100
0 <= B <= K
1 <= string length <= 100

Store the command string in a character array large enough to include the
terminating null character. You may declare it as:

    char commands[101];

OUTPUT FORMAT
Print two integers separated by one space: the final charge and the number of
ignored commands.

Do not print prompts or additional text.

SAMPLE INPUT
4 2
CCCDDDDDC

SAMPLE OUTPUT
1 2

EXPLANATION
The first two C commands fill the battery. The third C is ignored.

The next four D commands empty the battery. The fifth D is ignored.

The final C adds one unit. The final charge is 1, and two commands were ignored.
*/


#include <stdio.h>

int main(void)
{
    /* Read the input. */
    int K,B;
    scanf("%d %d",&K,&B);
    
    char comm[101];
    scanf("%s",&comm);
    int fc,igC=0;

    /* Process commands. You may write functions if appropriate. */
    for(int i=0; comm[i] != '\0' ; i++){
        if(comm[i]=='C'){
                if(B!=K && comm[i]=='C'){
                B++;
            }
            else {
                igC++;
            }
        }
        else if(comm[i]=='D'){
            if(B!=0 && comm[i]=='D'){
                B--;
            }
            else{
                igC++;
            }
        }
    }
    fc=B;
    /* Print the final charge and the number of ignored commands. */
    printf("%d %d",fc,igC);
    return 0;
}