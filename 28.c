//C program to find power of any number using for loop.//
#include<stdio.h>
int main()
{
    int b,p,r=1;
    scanf("%i %i",&b,&p);
    for(int i=1;i<=p;i++)
    {
        r=r*b;
    }
    printf("%i",r);
    return 0;
}
