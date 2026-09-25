/*
QUESTION-
A vibration sensor records the velocity of a machine component at regular intervals.
The readings may be negative or positive depending on the direction of motion of component.
But Engineers use the RMS(Rooot Mean Square) value to measure the overall strength of vibration.

write a function 
double RMS(double a[], int n);
that accepts an array of vibration readings and its lengthand returns the RMS value .
*/

#include<stdio.h>
#include<math.h>

double RMS(int n, double a[]);

int main(){
    int n;
    printf("enter the number of reading that the instrument read :");
    scanf("%d",&n);

    double a[n];
    printf("enter the readings of instrument :\n");    
    for(int i=0; i<n ;i++){
        scanf("%lf",&a[i]);
    }
    printf("%.2f",RMS(n,a));
    return 0;
}
double RMS(int n, double a[]){

    double sum=0;

    for(int i=0; i<n ;i++){
        sum=sum + a[i]*a[i];
    }

    return sqrt(sum/n);
    
}