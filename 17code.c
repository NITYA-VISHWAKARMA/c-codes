// how to find last digit  of a given number.

#include <stdio.h>
int main()
{
    int x,lastdigit;
    printf("enter a numrber: ");
    scanf("%d",&x);
    if(lastdigit = x%10) {
        printf("last digit = %d\n",lastdigit);
    }
    else{
        printf("nothing");
    }
}
