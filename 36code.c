#include<stdio.h>
int main()
{
    int i;
    int j;
    for(j=0;j<=5;j++){
        for(i=1;i<=6;i++)
        {
            if(j<=7-i)
             printf("*");
        else
             printf("  ");
        }
        printf("\n");
    }
}