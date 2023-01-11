//C program to copy one array to another array.//
#include<stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    printf("%i ",b[i]);
    return 0;
    
}
