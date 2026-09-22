#include<stdio.h>
int main(){
    char str[100];
    printf("enter your string here :");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0'){
        int count=1;
        for(int j=i;str[j]!='\0';j++){
            if(str[j+1]==str[j]){
                count++;
            }
            else{
                break;
            }
        }
        printf("%c%d",str[i],count);
        i=i+count;
    }
    return 0;
}