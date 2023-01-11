//C program to add two number using pointers.//
#include<stdio.h>
int add(int *p,int *q)
{
    int l=*p+*q;
    return l;
}
int main()
{
    int a,b;
    scanf("%i %i",&a,&b);
    int q=add(&a,&b);
    printf("Addition is %i",q);
    return 0;
}
