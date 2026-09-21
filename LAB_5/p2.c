#include <stdio.h>

int main(void)
{
    int n;

    /* Read the length of the vectors */
    printf("enter a positive integer n :");
    scanf("%d", &n);

    double a[n], b[n];
    
    /* Read the first vector */
    printf("enter the values for vector a :");
    for(int i=0;i<n ; i++){
        scanf("%lf",&a[i]);
    }
    /* Read the second vector */
    printf("enter the values for vector b :");
    for(int j=0;j<n;j++){
        scanf("%lf",&b[j]);
    }


    /* Compute the dot product */
    double count=0;
    for(int k=0;k<n ;k++){
        count += a[k]*b[k];
    }
    
    /* Print the answer in the required format */
    printf("your dot product is :%f",count);


    return 0;
}