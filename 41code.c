#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter two numbers and operators\n");
    scanf("%d %d %c",&a, &b, &op);
    switch(op){
    case '+':
    printf("%d" , a+b);
    break;
    case '-':
    printf("%d", a-b);
    break;
    case '*':
    printf("%d" , a*b);
    break;
    case '/':
    printf("%d" ,  a/b);
    break;
    default:
    // printf("invalid operator");56
     break;
}
}
