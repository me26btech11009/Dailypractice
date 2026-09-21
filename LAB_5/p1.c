#include<stdio.h>
int main(){
    int n;
    printf("enter a number n :");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int a=1;
        while(a<=n){
        printf("%d",a*i);
        a++;  
        }
        printf("\n");
        i++;
    }
    return 0;
}