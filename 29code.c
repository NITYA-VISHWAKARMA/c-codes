// WAP to print sum of n numbers

#include <stdio.h>
int main()
{
    int i,n;
    int s;
    printf("enter a number: ");
    scanf("%d",&s);
    for(i=0;i<=n;i++){
        s = s + i;
    }
    printf("sum is %d: ");
    return 0;
}