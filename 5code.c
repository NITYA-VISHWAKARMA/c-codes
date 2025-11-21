     
// wap to find the largest numbers of three numbers
#include <stdio.h>
int main()
{
    int x,y,z;
    printf("enter a numbers:");
    scanf("%d %d %d" ,&x, &y, &z);
    if(x>=y && x>=z){
        printf("%d  is larger\n",x);
    }
    else if(y>=z && y>=x){
        printf("%d is larger\n",y);
    }
        else  
    {
        printf("%d is larger\n");
    }
    }
