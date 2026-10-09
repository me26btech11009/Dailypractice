/*
QUESTION-
For a mechanical part there is opening in which you have to fit rectangular workpice.
the dimesions of opening are length=100 and width=80.

write a code to print-
    1. "FITS"-- if the workpice can be fit in it without changing it's orientation.\,
    2. "ROTATE"-- if the workpice can be fit in it  by rotating it by 90 degrees,
    3. "CANNOT FIT"-- if the workpiece cannot be fit in any orientation.


Example-
    input:
    80,60
    output:
    FITS 

Example2-
    input:
    50,90
    output:
    ROTATE
*/

#include<stdio.h>
int main(){
    
    double opening_length,opening_width;
    //given opening length and opening width are 100,80 respectively by default//
    opening_length=100;
    opening_width=80;
    double workp_length,workp_width;
    printf("Enter the length of work piece :");
    scanf("%lf",&workp_length);
    printf("Enter the width of work piece :");
    scanf("%lf",&workp_width);

    if(workp_length<= opening_length && workp_width<=opening_width){
        printf("FITS\n");
    }
    else if(workp_length<=opening_width && workp_width <= opening_length){
        printf("ROTATE workpiece by 90 degrees\n");
    }
    else{
        printf("CANNOT FIT\n");
    }
    
    return 0;
}