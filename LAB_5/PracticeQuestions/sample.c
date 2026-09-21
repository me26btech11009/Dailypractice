#include<stdio.h>
int main(){
    int row,col;
    row=3;
    col=5;
    int i=1;
    while (i<=row) {
        int j=1;
        while (j<=col) {
            printf("*");
            j++;
        }
        printf("\n");
        i++ ;
    }
    return 0;
}