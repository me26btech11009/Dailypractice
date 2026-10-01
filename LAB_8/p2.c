/*
QUESTION-
A Minesweeper board is represented by an n x m matrix.
Each entry is:
    0  for an empty cell
    1  for a mine

For every empty cell, count the number of mines in its neighboring cells.
A cell can have up to 8 neighbors: horizontal, vertical, and diagonal.

In the output:
    - print -1 for a cell containing a mine;
    - otherwise, print the number of neighboring mines.
  Ex :
    Input
        The first line contains two integers n and m, the number of rows and columns.
        The next n lines each contain m integers, each either 0 or 1.

    Output
        Print an n x m matrix.
        For each cell:
            - print -1 if the cell contains a mine;
            - otherwise print the number of mines among its neighboring cells.

        Constraints
        1 <= n, m <= 100

        Sample Input
        4 5
        0 1 0 0 0
        0 0 0 1 0
        1 0 0 0 0
        0 0 1 0 0

        Sample Output
        1 -1 2 1 1
        2 2 2 -1 1
        -1 2 2 2 1
        1 2 -1 1 0
*/

#include <stdio.h>

int main() {
    int n, m;
    int grid[100][100];
    int result[100][100];
    int i,j,di,dj;
    int count;

    scanf("%d %d", &n, &m);


    /* Read the board */
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&grid[i][j]);
        }
    }
    /* For every cell:
       - store -1 if it contains a mine
       - otherwise count mines in its neighboring cells
    */
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(grid[i][j]==1){
                result[i][j] = -1;
            }
            else{
                count=0;
                for(di=-1;di<=1;di++){
                    for(dj=-1;dj<=1;dj++){
                        if(di==0 && dj==0){
                            continue;
                        }
                        if(i+di >= 0 && i+di<n && j+dj >= 0 && j+dj<m){
                            if(grid[i+di][j+dj]==1){
                                count++;
                            }
                        }
                    }
                    
                }
                result[i][j]=count;
            }
        }
    }
    
    /* Print the result matrix */
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",result[i][j]);
            if(j<m-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
