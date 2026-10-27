/*
QUESTION-
The second line contains two integers c and d: the lower and upper heights
of the second opening.

CONSTRAINTS: 0 <= a < b <= 1000 and 0 <= c < d <= 1000; all four input heights are integers and satisfy the constraints.
Iinput validation is not required.

OUTPUT FORMAT

Print YES if at least one horizontal ray can pass through both openings.
Otherwise, print NO.

Print the result on a single line, using uppercase letters.
Do not print prompts or explanatory text.

SAMPLE INPUT 1
3 7
5 9

SAMPLE OUTPUT 1
YES

EXPLANATION
A horizontal ray at height 6 cm passes through both openings.

SAMPLE INPUT 2
3 7
7 10

SAMPLE OUTPUT 2
YES

EXPLANATION
A ray at height 7 cm passes through both openings. Boundary heights are allowed.

SAMPLE INPUT 3
3 7
8 10

SAMPLE OUTPUT 3
NO

EXPLANATION
Every allowed height in the first opening is below every allowed height
in the second opening, so no horizontal ray can pass through both.
*/

#include <stdio.h>

int main(void)
{
    int a, b, c, d;

    /* Read the input. */
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    int found=0;
    /* Use conditional statements to print the required result. */
    for(int i=a;i<=b;i++){
        for(int j=c;j<=d;j++){
            if(i==j){
                found=1;
                break;
            }
        }
    }
    if(found==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
