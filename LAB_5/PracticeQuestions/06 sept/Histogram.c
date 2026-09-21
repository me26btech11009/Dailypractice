#include<stdio.h>
int main(){
    int n;
    printf("enter a number n : ");
    scanf("%d",&n);
    int array[n];
    printf("enter %d numbers from 0 to 9 (note:you can only enter a number upto 10 times only) :\n",n);
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int freq[10];
    for(int j=0;j<=9;j++){
        int count=0;
        int k=0;
        while(k<n){
            if(j==array[k]){
                count++;
            }
            k++;
        }
        freq[j]=count;
    }
    int q=10;
    while(q>=0){
        int w=0;
        while(w<10){
            if(q<freq[w]){
                printf(" *");
            }
            else{
                printf("  ");
            }
            w++;
        }
        printf("\n");
        q--;
    }
    for(int e=0;e<=9;e++){
        printf(" %d",e);
    }
    return 0;
}