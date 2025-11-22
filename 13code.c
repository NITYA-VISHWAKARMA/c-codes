// program to check  a number is divisble by 5 and 11.

#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:",n);
    scanf("%d",&n);
    if(n%5==0 || n%11==0){
        printf("%d is divisble by 5 and 11",n);
    }
    else{
        printf("%d is not divisble by 5 and 11",n);
    }
}