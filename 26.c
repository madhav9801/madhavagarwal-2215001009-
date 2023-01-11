// C program to print Armstrong numbers from 1 to n//
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,p,sum,j,d,k,l=0;
    scanf("%i",&n);
    for(i=1;i<=n;i++)
    {
        k=i;
        while(k>0)
        {
            k=k/10;
            l++;
        }
        p=i;
        sum=0;
        while(i>0)
        {
            j=i%10;
            sum=sum+pow(j,l);
            i=i/10;
        }
        if(sum==p)
        printf("%i",p);
    }
    return 0;
}

