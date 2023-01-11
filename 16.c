//C program to print all natural numbers AND sum of it from 1 to n//
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter no. of numbers ");
    scanf("%i",&a);
    b=0;
    for(int i=1;i<=a;i++)
    {
        printf("%i ",i);
        b=b+i;
    }
    printf("\n%i",b);
    return 0;
}
