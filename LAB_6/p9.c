#include<stdio.h>
int main (){
    char sentence[200];
    printf("enter a sentence: ");
    scanf("%[^\n]s", sentence);
    int count=0;
for (int i=0; sentence[i] != '\0'; i++){
    if(sentence[i]==' '){
        count++;
    }
}
printf("the number of words in the sentence is: %d", count+1);
return 0;
}