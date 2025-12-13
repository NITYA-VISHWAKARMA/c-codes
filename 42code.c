#include <stdio.h>
int main()
{
    int vowel;
    int consonant;
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'A': case'a':
    printf("vowel\n");
    break;
    case 'E': case'e':
    printf("vowel\n");
    break;
    case 'O': case'o':
    printf("vowel\n");
    break;
    case 'U': case'u':
    printf("vowel\n");
    break;
    case 'I': case'i':
    printf("vowel\n");
    break;
    default:
    printf("consonant");
    }
}