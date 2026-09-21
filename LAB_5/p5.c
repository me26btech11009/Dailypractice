#include<stdio.h>
int main(){
    int n;
    printf("enter a number n :");
    scanf("%d",&n);
    float a[n];
    printf("enter %d values :\n",n);
    for (int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    float s=0;
    for(int k=0;k<n;k++){
        s+=a[k];
    }
    double avg= s/n;
    printf("averge : %.1f\n",avg);
    int c=0;
    for(int l=0;l<n;l++){
        if(a[l]>avg){
            c++;
        }
    }
    printf("number of values above the average : %d",c);
    return 0;
}