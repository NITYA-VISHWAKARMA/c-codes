// write a program to check whether a number is even or odd.

#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("number is even");
    }
    else 
    {
        printf("number is odd");
    }
}