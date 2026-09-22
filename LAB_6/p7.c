#include<stdio.h>
int main(){
    char word[100];
    char x,y;
    scanf("%s",&word);
    printf("\n");
    scanf(" %c",&x);
    printf("\n");
    scanf(" %c",&y);
    int i=0;
    while(word[i] != '\0'){
        if(word[i]==x){
            word[i]=y;
        }
        i++;
    }
    printf("%s",word);
    return 0;
}