#include<stdio.h>
double calculateArea(float a,float b){
    return a*b;
}
int main(){
    float k,l;
    printf("enter the lenght of the rectangle :");
    scanf("%f",&l);
    printf("enter the breadth of the rectangle :");
    scanf("%f",&k);
    printf("%lf",calculateArea(l,k));
    return 0;
}