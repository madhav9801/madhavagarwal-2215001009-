//C program to find HCF(GCD) AND LCM of two numbers.//
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%i %i",&a,&b);
    for(int i=a;i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {printf("HCF of %i and %i is %i\n",a,b,i);
        break;}
    }
    for(int i=a;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("LCM of %i and %i is %i",a,b,i);
            break;
        }
    }
    return 0;
}
