#include<stdio.h>
int main(){
    int n;
    printf("enter a number n :");
    scanf("%d",&n);
    int a[n];
    printf("enter %d values :\n",n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=0;
    while(j<n && j<10){
        int c=0;
        for(int k=0;k<n;k++){
            if(j==a[k]){
                c++;
            }
        }
        printf("%d : %d\n ",j,c);
        j++;
    }
    return 0;
}