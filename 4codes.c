// / wap to print largest numbers in two numbers
#include <stdio.h>
int main()
{
    int x,y;
    printf("enter a numbers:");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("%d is larger\n");
    }
    else if(y>x){
        printf("%d is larger\n");
    }
    else 
    printf("both numbers are equal\n");
    }
     