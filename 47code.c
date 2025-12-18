#include<stdio.h>
int  main()
{
    int n,l;
    int choice;
    printf("enter a number:");
    scanf("%d", &choice ); 
    switch (choice)
    {
    case 1:
    printf("enter two number:");
    scanf("%d %d", &n, &l);
    printf("%d is additive",n+l);
    break;
    case 2:
    printf("enter two number:");
    scanf("%d %d", &n, &l);
    printf("%d is subtractive",n-l);
    break;
    case 3:
    printf("enter two number:");
    scanf("%d %d", &n, &l);
    printf("%d is multiplicative",n*l);
    break;
    case 4:
    printf("enter two number:");
    scanf("%d %d", &n, &l);
    printf("%d is divisble",n/l);
    break;
    default:
    printf("Invalid number");
        break;
    }
}
