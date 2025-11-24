// / print the sum of first 10 natural numbers using  a while number.

#include <stdio.h>
int main()
{
    int i=1;
    int sum =0;
    while(i<=10){
        sum = sum+1;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}