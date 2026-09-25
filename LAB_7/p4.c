/*
QUESTION-
Write a function 
int daysElapsed(int day, int month);
that takes a day and month as input and returns 
the number of days from the beginning of the year upto and includig that date.

Assume that the year is not a leap year (i.e, february month has28 days).

*/

#include<stdio.h>
int daysElapsed(int day, int month);
int main(){
    int day;
    int month;
    printf("enter current month :");
    scanf("%d",&month);
    printf("enter the current day of the month :");
    scanf("%d",&day);

    printf("the days elpsed upto the day-%d of the month-%d  is = %d  .",day,month,daysElapsed(day,month));

    return 0;
}
int daysElapsed(int day, int month){
    int value=day;
    int days[]={31,28,31,30,31,30,31,30,31,30,31,30};
    if(month!=1){
        for(int i=0;i<month-1;i++){
            value=value+days[i];
        }
    }
    return value;
}