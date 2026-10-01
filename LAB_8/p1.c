/*
QUESTION-
You are given two integer matrices A and B such that the number of columns
of A is equal to the number of rows of B.

Write a function

    int productEntry(int A[][MAX], int B[][MAX],
                     int row, int col, int common);

that returns the entry in row 'row' and column 'col' of the product A * B.
The parameter column equals the number of columns of A (= number of rows of B).

The function must compute the inner product of row 'row' of A and column
'col' of B.

Call this function from main for every entry of the product matrix and
print the resulting matrix.
  Ex : 
    Input
        The first line contains two integers r1 and c1, the number of rows and
        columns of A.
        The next r1 lines contain c1 integers each, giving matrix A.
        The next line contains two integers r2 and c2, the number of rows and
        columns of B.
        The next r2 lines contain c2 integers each, giving matrix B.
        It is guaranteed that c1 = r2 and that all dimensions are at most 20.
    Output
        Print the product matrix A * B.
        Print each row on a new line, with entries separated by a single space.

*/


#include <stdio.h>

#define MAX 20

int productEntry(int A[][MAX], int B[][MAX],
                 int row, int col, int common);

int main(void)
{
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r1, c1, r2, c2;
    int i, j;

    scanf("%d %d", &r1, &c1);

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);

    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    /* Compute the product matrix by calling productEntry
       once for each entry of C. */
    for(i=0;i<r1 ;i++){
        for(j=0; j<c2 ;j++){
            C[i][j]=productEntry(A,B,i,j,c1);
        }
    }


    /* Print the product matrix. */
    for(i=0; i<r1 ;i++){
        for(j=0 ;j<c2 ;j++){
            printf("%d",C[i][j]);
            if(j<c2-1){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

int productEntry(int A[][MAX], int B[][MAX],
                 int row, int col, int common)
{
    /* Write your code here. */
    int i;
    int sum=0;
    for(i=0; i<common ; i++){
        sum=sum+ A[row][i]*B[i][col];
    }
    
    return sum;

}
