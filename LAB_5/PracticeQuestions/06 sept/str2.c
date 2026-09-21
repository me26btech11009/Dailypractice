#include<stdio.h>
int main(){
    char name[100];
    printf("enter your name : ");
    scanf("%99s",name);
    int vowels=0;
    // '\0' in the for loop is used for stopping condition. i.e,for codition runs until it doesn't encounter end character//
    for(int i=0;name[i!='\0'];i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u'){
        vowels+=1;
    }
    else{
        continue;
    }
}
printf("total vowels in the name :%d\n",vowels);
return 0;
}