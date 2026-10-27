/*
QUESTION-
A civil-engineering team divides a piece of land into an R x C grid.
Each value gives the number of work units needed to prepare that location.

The team must choose a site containing exactly 2 consecutive rows and
2 consecutive columns. Its total work is the sum of these four values.

Write a C program to find the site requiring the least total work.

Identify a site by the row and column of its top-left corner. Rows and
columns are numbered from 0.

If several sites require the same least work:
- Choose the site with the smallest top-left row.
- If their top-left rows are equal, choose the one with the smallest
  top-left column.

Every possible 2 x 2 site must be considered, including overlapping sites.
For example, top-left positions (0, 0) and (0, 1) identify two different
sites when both fit inside the grid.

Hint: A 2 x 2 site is fully determined by its top-left cell.
The hint is optional; you may solve the problem in your own way.

INPUT FORMAT
- The first line contains two integers R and C.
- Each of the next R lines contains C integer work values.

The site size is always 2 x 2; it is not part of the input.

CONSTRAINTS
2 <= R, C <= 20
0 <= work value <= 1000

The input is valid; no input validation is required.

Store the grid in a two-dimensional array. You may declare it as:

    int work[20][20];

OUTPUT FORMAT
Print three integers separated by single spaces: the top-left row,
the top-left column, and the total work for the selected site.

Do not print prompts or additional text.

SAMPLE INPUT
4 4
8 3 7 9
4 1 2 6
9 2 1 5
6 8 4 7

SAMPLE OUTPUT
1 1 6

EXPLANATION
The selected site contains:

    1 2
    2 1

Its total work is 1 + 2 + 2 + 1 = 6, which is smaller than the total
for every other possible 2 x 2 site.
*/

#include <stdio.h>

int main(void)
{
    int work[20][20];
    int r,c;
    /* Read the dimensions and store the work values in a 2D array. */
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&work[i][j]);
        }
        printf("\n");
    }

    /* Find the required 2 x 2 site and print its position and total work. */
    int min=1000;
    int cord[3];
    for(int x=0;x<r-1;x++){
        for(int y=0;y<c-1;y++){
            int tw=0;
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    if(work[x+i][y+j]!='\0'){
                        tw+=work[x+i][y+j];
                    }
                }
            }
            if(tw<min){
                min=tw;
                cord[0]=x;
                cord[1]=y;
            }
        }
    }
    
    printf("%d %d %d",cord[0],cord[1],min);

    return 0;
}