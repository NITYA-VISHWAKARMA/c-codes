
#include <stdio.h>
int main()
{
    int n = 1236;
    int count = 0;
    while(n!=0){
        n = n%10;
        count++;
        // printf("%d",n);
    }
    printf("Digits = %d",count);
    return 0;
}

