/*
QUESTION-
A bioreactor produces a compound over n consecutive hours. The production during each hour is recorded. Find the maximum total production in any k consecutive hours. Assume that the input is valid.

Input
The first line contains two integers n and k.
The second line contains n nonnegative integers, giving the production in chronological order.

Output
Print the maximum total production in any k consecutive hours as a single integer.

Example input
8 3
4 7 2 9 5 3 8 1

Example output
18
*/

#include <stdio.h>

int main(void) {
    int n, k;
    int production[1000];

    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++){
        scanf("%d",&production[i]);
    }

    /* Write your code here. */
    
    int i=0;
    int max=0;
    while(i<n-k+1){
        int sum=0;
        for(int j=0;j<k;j++){
            sum+=production[i+j];
        }
        if(max<sum){
            max=sum;
        }
        i++;
    }
    
    printf("%d",max);

    return 0;
}