// program to check whether a given number is divisble by 3 and 7.

#include <stdio.h>
int main()
{
    int x;
    printf("enter a number:",x);
    scanf("%d",&x);
    if(x%3==0 || x%7==0){
        printf("%d is divisble by 3 and 7",x);
    }
    else{
        printf("%d is not divisble by 3 and 7",x);
    }
