//  WAP to print numbers from 1 to 10 using a while loop.

#include <stdio.h>
int main(){
    int i=1;
    scanf("%d",&i);
    while (i<=10)
    {
        printf("%d\n",&i);
        i++;
    }
    return 0;
}