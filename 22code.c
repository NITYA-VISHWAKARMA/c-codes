// program to check whether a triangle is valid or not. 

#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=0,b<=0,c<=0){
        printf("Invalid sides\n");
    }
    if(a+b>c && a+c>b && b+c>a){}
        else if(a==b && b==c){
            printf("Equalateral triangle\n");
        }   
        else if(a==b || b==c){
            printf("isoceles triangle\n");
        }
        else {
            printf("scalene triangle\n");
        }
}