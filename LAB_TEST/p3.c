/*
QUESTION-
A factory produces a certain item and Tracks the umber of items manufactured on each day.
write a code to take input from user -the number of days N.
and also the data of items manufactured on each day.
Take a input integer K for calculating the max value of production in K consecutive days.

Example-
    input-
    8,3
    12,4,8,19,9,14,25,19
    
    output-
    58
Example2-
    input
    4,4
    3,6,9,12

    output
    30
*/

#include<stdio.h>
int main(){
    int n,k;
    int production[1000];
    printf("Enter the number of days of production :");
    scanf("%d",&n);
    printf("Enter the no of item produced on respective days :\n");
    for(int i=0; i<n; i++){
        scanf("%d",&production[i]);
    }
    printf("ENter the value of K (To find the max value of production in k consecutive days) :");
    scanf("%d",&k);

    int max=0;
    for(int i=0;i<n-k+1; i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum+=production[i+j];
        }
        if(sum>=max){
            max=sum;
        }
    }

    printf("The max value of production in %d consecutive days is -->%d",k,max);

    return 0;
}