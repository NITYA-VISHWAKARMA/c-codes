#include <stdio.h>
int main()
{
    int n,P,N;
    printf("enter a number\n");
    scanf("%d", &n);
    switch(n>0){
        case 'P':
        printf("Positive number\n");
        break;
    switch(n<0)
        case 'N':
        printf("Negative number\n");
        break;
        default:
        printf("Zero number\n");
        break;
    }
}
