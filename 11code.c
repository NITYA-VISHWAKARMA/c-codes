// WAP to check whether a given no. is positive or non positive.

#include <stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x>0)
    {
        printf("positive");
    }
    else
    {
        printf("non positive");
    }
}