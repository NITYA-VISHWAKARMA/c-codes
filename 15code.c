//  How to remove last digit of a given number

#include <stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x=x/10){
        printf("x=%d is lastdigit",x);
    }
    else{
        printf("nothing");
    }
}
