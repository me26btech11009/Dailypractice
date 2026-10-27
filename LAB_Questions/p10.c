/*/
QUESTION-
A chamber extends from position 0 to position N. It is closed at the left
end (position 0) and open at the right end (position N). A robot starts at
an integer position k, where 0 <= k <= N.

The robot's movement instructions have been corrupted. It receives a
string consisting only of the characters L and R. Each character is one
instruction and takes one time step. Instructions are processed from
left to right, starting at time step 1.

- L: Move one position to the left. If the robot is at position 0, it
  stays there, but this instruction still consumes one time step.
- R: Move one position to the right. If the robot is at position N,
  this instruction makes it leave the chamber.

Position N is still inside the chamber. Reaching N does not count as
escaping: the robot must receive an R instruction while already at N.
Once the robot escapes, all remaining instructions are ignored.

Write a C program to determine whether the robot escapes while following
the given instructions. If it escapes, print the time step at which it
first leaves the chamber. Otherwise, print -1.

INPUT
The first line contains two space-separated integers N and k.
The second line contains the instruction string, with no spaces.

Constraints:
1 <= N <= 1000000
0 <= k <= N
1 <= length of the instruction string <= 1000
Each character of the string is either L or R.
All input is valid.

OUTPUT
Print a single integer: the time step at which the robot escapes,
or -1 if it does not escape during the given instructions.
Do not print prompts or any additional text.

EXAMPLE 1
Input
3 1
LLRRRRLL

Output
6

Explanation
The robot starts at position 1.
Time step 1: L moves it to position 0.
Time step 2: L leaves it at position 0.
Time step 3: R moves it to position 1.
Time step 4: R moves it to position 2.
Time step 5: R moves it to position 3; it is still inside.
Time step 6: R makes it leave the chamber.
The remaining instructions are ignored.

EXAMPLE 2
Input
3 1
RR

Output
-1

Explanation
The robot moves to positions 2 and 3. It reaches the open end but does
not move beyond it, so it has not escaped.
*/

#include <stdio.h>

int main(void)
{
    int n, position;
    char instruction[1001];

    /* Read the input. */
    scanf("%d %d",&n,&position);
    scanf("%s",instruction);
    int steps=1;
    int isOut=0;

    /* Process the instructions and print the result. */
    for(int i=0; instruction[i]!='\0' ; i++){
        if(instruction[i]=='L'){
            if(position==0){
                steps++;
            }
            else{
                position=position-1;
                steps++;
            }
        }
        else if(instruction[i]=='R'){
            if(position<n){
                position++;
                steps++;
            }
            else{
                isOut=1;
                break;
            }
        }
    }
    
    if(isOut==1){
        printf("%d",steps);
    }
    else{
        printf("-1");
    }
    
    return 0;
}
