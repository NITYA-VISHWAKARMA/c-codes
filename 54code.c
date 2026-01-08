
// WAP to find the average of n numbers using an array
#include<stdio.h>
int main()
{
    int n,i;
    int sum =0;
    float  avg;
    int a[100];
    printf("enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+= a[i];
    }
    avg = (float)sum/n;
    printf("Average = %.2f",avg);
    return 0;
}