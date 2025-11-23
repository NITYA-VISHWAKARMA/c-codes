// WAP to check whether a given character is cny alphabet (uppercase)an alaphabet (lowercase) or digit or a special character.

#include <stdio.h>
int main(){
    int X;
    printf("enter a character: ");
    scanf("%c",&X);
    if(X>='A' && X<='Z'){
        printf("%c is divisble ");
    }else if(X>='a' && X<='z'){
        printf("%c is divisble ");
    }else if(X>='0' && X<='9'){
        printf("%c is divisble ");
    }else{
        printf("%c is divisble ");
    }
    return 0;
}