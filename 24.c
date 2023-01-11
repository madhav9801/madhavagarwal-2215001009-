//C program to print all Strong Numbers between 1 to n//
#include<stdio.h>
int main()
{
 int n,i,p,c;
 scanf("%i",&n);
 for(i=1;i<=n;i++)
 {
    p=i;
    while(i>0)
    {
        int fact=0;
        int j=i%10;
        while(j>0)
        {
            c=1;
            c*=j;
            j--;
            
        }
        i=i/10;
        fact=fact+c;
        if(fact==p)
        printf("%i",p);
    }
 }return 0;
}

