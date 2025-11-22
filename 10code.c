// write a program to swap values of  two int type variables.

#include <stdio.h>
int  main()
{
    int a;
    int b;
    int c;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: a=%d b=%d\n ,a,b");
    return 0;
}