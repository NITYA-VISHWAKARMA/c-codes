// WAP to print a number is divisble by 5.

#include <stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(x%5==0){
        printf("%d is divisble ",x);
    }
    else{
        printf("%d is not divisble",x);
    }
}
