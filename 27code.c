// WAP to print days in a month.

#include <stdio.H>
int main()
{
    int m,y,days;
    scanf("%d %d", &m &y);
    if(m<1 && m>12){
        printf("Invalid months");
    }
    if(m==1,m==3,m==7,m==10,m==12){
        printf("31 days");
    }else if
        (m==4,m==5,m==6,,m==9,m==11){
         printf("30 days");  
        }
    else if(y%400==0 || y%4==0 && y%100!=0){
        printf("29 days");
    }else 
    {
        printf("28 days");
    }    
    printf("%d\n",&days);
    return 0;
    }
