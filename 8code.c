// Program to check wheteher a person is eligible to vote(age>=18).

#include <stdio.h>
int main()
{
    int age;
    printf("enter an age:",age);
    scanf("%d",&age);
    if(age>=18){
        printf("%d eligible to vote",age);
    }
    else{
        printf("%d is not eligible for vote",age);
    }
}