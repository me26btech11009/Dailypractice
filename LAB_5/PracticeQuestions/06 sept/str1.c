#include<stdio.h>
int main(){
    char name[50];
    printf("enter your name (without space) : ");
    scanf("%49s",&name);
    name[0]='z';
    printf("%s",name);
    return 0;
}