// WAP to print numbers from 10 to 1 in reverse order using a while loop.

#include <stdio.h>
int main(){
    int i=10;
    scanf("%d",&i);
    while (i>=1)
    {
        printf("%d\n",&i);
        i--;
    }
    return 0;
}