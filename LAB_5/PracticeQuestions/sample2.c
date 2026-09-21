#include<stdio.h>
int main (){
    int row,col;
    printf("enter no of rows you wanted :");
    scanf("%d",&row);
    printf("enter no of columns you wanted :");
    scanf("%d",&col);
    int i=0;
    while(i<= row){
        int j=0;
        while (j<=col){
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}