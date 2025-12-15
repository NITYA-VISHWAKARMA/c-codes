#include <stdio.h>
int main()
{
    int marks;
    printf("enter a marks:");
    scanf("%d",&marks);
    switch(marks/10)
    {
        case 10: case 9:
        printf("grade A\n");
        break;
        case 8: case 7:
        printf("grade B\n");
        break;
        case 6: case 5:
        printf("grade C\n");
        break;
        default: 
        printf("Fail\n");
        break;
    }
}