//C program to check whether a number is palindrome or not.//
#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    int b=a,c=0;
    while(a>0)
    {
        int n=a%10;
        a=a/10;
        c=(c*10)+n;
    }
    if(c==b)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}
