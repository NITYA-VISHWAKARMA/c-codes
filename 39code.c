#include <stdio.h>
#include <stdlib.h>
int main()
{
int x,r,l,b,y,z,d;
float a;
float ar;
printf("\n1. Area of circle");
printf("\n2. Area of rectangle");
printf("\n3. Average of three numbers");
printf("\n4. Exit");
printf("\n\n Enter your choice:");
scanf("%d",&x);
switch (x)
{
case 1:
    printf("enter radius of circle:");
    scanf("%d",&x);
    a=3.14*r*r;
    printf("area of circle is %d,a");
    break;
case 2:
    printf("enter length and breadh of a rectangle ");
    scanf("%d",&x);
    ar=l*b;
    printf("area of rectangle  is %d,a");
    break;
case 3:
    printf("enter three numbers");
    scanf("%d %d %d",&y, &z ,&d);
    a=(y+z+d)/3.0;
    printf("Average is %d",a);
    break;
case 4:
    exit(0);
default:
    printf("Invalid chioce");
    break;
}    
}
