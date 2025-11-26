#include <stdio.h>
int main()
{
    int n;
    int temp,r;
    int s=0;
    printf("enter any number:" );
    scanf("%d",&n);
    if(n < 0){
        printf("not accesible\n");
        return 0;
    }
     temp=n;
    while(n > 0){
        r = n%10;
        s = r + (s*10);
        n = n/10;
        }
        if(temp==s){
            printf("number is palindrome\n");
        }else{
            printf("not palindrome\n");
        } 
}