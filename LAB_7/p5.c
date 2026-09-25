/*QUESTION-
A student activity log contains n entries .Each entry is either
1-studying or 
0-sleeping .
The student intends to study no more than k consecutive sessions without a break.
First, write a function 
int runTime(int a[],int n, int i);
that returns the number of consecutive 1s starting at positions i in the array.
If a[i] is 0 then ,the function should return 0
Then use this function to find where the student violates the rule of studying more than k consecutive sessions.
(output varies from 0 to n.)
*/

#include<stdio.h>
int runTime(int n,int a[],int i);
int main(){
    int n;
    int t;

    printf("enter the value of n (total no of sessions that the student have):");
    scanf("%d",&n);
    int a[n];
    printf("enter the student activity (as 1s and 0s .1=studying & 0=sleeping) :\n");
    for(int q=0;q<n; q++){
        scanf("%d",&a[q]);
    }

    printf("enter the tolerance(no of sessions a student can study wihtout taking break) :");
    scanf("%d",&t);

    for(int k=0;k<n;k++){
        if(runTime(n,a,k)>t){
            printf("the session at which the student broke the rule is %d",k+1+t);
        }
    }
    return 0;

}
int runTime(int n, int a[],int i){
    int value=0;
    for(int j=i;j<n;j++){
        if(a[j]==1){
            value++;
        }
        else if(a[j]==0){
            break;
        }
    }
    return value;
}