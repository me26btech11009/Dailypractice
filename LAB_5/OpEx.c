#include<stdio.h>
int main(){
    int n;
    printf("enter the number of resistor combination sets : ");
    scanf("%d",&n);
    float A[n],B[n];
    printf("enter the resistances in row :\n");
    for(int q=0;q<n;q++){
        scanf("%f",&A[q]);
    }
    printf("enter the resistances in the column :\n");
    for(int w=0;w<n;w++){
        scanf("%f",&B[w]);
    }
    for(int u=n-1;u>=0;u--){
        float s=0;
        s=A[u]+B[u];
        if(u-1>=0){
            float p;
            p=(s*B[u-1])/(s+B[u-1]);
            B[u-1]=p;
        }
        else{
            printf("%f",s);
        }
    }
    return 0;
}