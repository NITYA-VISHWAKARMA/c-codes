// WAP to check whether a given number is primr or not

#include<stdio.h>
int main()
{
    int i;
    int j;
    printf("enter a number:");
    scanf("%d",&j);
    for(i=2;i<=j-1;i++)
    {
        if(i%j==0);
        break;
    }
    if (i==j)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    }

