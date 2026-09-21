#include<stdio.h>
int main(){
    int m,n;
    printf("enter the sides length, breadth of rectangle respectively :\n");
    scanf("%d %d",&n,&m);
    int i=1;
    while(i<=m){
        if(i==1 || i==m){
        int a=1;
        while(a<=n){
            printf("*");
            a++;
        }
    }
    else{
        for(int b=1;b<=n;b++){
            if (b==1 || b== n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
    i++;
    printf("\n");
    }
    return 0;
}