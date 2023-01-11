//C program to check alphabet, digit or special character using Conditional operator//
#include<stdio.h>
int main()
{
    char s;
    scanf("%c",&s);
    if((s>=65&&s<=90)||(s>=97&&s<=122))
    printf("Character");
    else if(s>=128 && s<=255)
    printf("Digit");
    else
    printf("Special character");
    return 0;
}

    