//  WAP to print the sum of all array elements.
#include<stdio.h>
int main()
{
    printf("enter 5 elements\n:");
    int i,a[5];
    int sum=0;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum = sum + a[i];        
    }
    printf("sum = %d",sum);
    return 0;
}