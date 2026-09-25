/*
QUESTION -
A grayscale image is represented by an m x n matrix. 
Each entry is an integer from 0 to 255, where 0 represents black and 255 represents white .
given threshold T, convert the grayscale image to a black&white image as follows
-if a pixel value is atleast T,replace it by 255.
-otherwise ,replace it with 0.

*/
#include<stdio.h>
int main(){
    int m,n,T;
    printf("enter the size of the matrix (m ,n respectively) :\n");
    scanf("%d %d",&m,&n);
    printf("enter the threshold value T :");
    scanf("%d",&T);

    int matrix[m][n];

    printf("enter the pixel sizes in the m x n matrix (Row wise) :\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]>=T){
                matrix[i][j]=255;
            }
            else{
                matrix[i][j]=0;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("  %d",matrix[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}