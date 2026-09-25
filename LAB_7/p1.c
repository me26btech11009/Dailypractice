/*

QUESTION-
A sensor produces n readings a[0],a[1],..a[n-1].
The absolute difference between succesive readings are guaranteed to be non-increasing.

write a function
int firstStable(double a[],int n ,int tolerance);
that returs the first index i such that 
a[i+1]-a[i]<=tolerance.
return -1 ,if there is no such index . Call this function from main function and print the returned value' 

*/

#include<stdio.h>

int firstStable(int n,int a[],int tolerance);

int main(){
    int n;
    printf("enter the number of readings that the sensor read :");
    scanf("%d",&n);

    int tolerance;
    int a[n];
    
    printf("enter the value of tolerance :");
    scanf("%d",&tolerance);
    printf("enter the readings of the seasor :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the first change occured at %dth number .",firstStable(n,a,tolerance));

    return 0;
    
}
int firstStable(int n,int a[],int tolerance){
    int value = -1;
    for (int k=0;k<n;k++){
        if(a[k+1]-a[k]<=tolerance){
            value = k;
        }
    }
    return value;
}