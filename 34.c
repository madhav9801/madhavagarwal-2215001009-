//C program to delete an element in array at specified position.//
#include <stdio.h>
int main(){
    int n,i,e,val;
    printf("enter the size of an array");
    scanf("%d",&n);
    int a[n+10];
    for(i=0;i<n;i++){
        printf("enter the number = ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("the values are = %d\n",a[i]);
    }
    
    printf("enter the position you want to delete the number");
    scanf("%d",&e);
    for(i=e-1;i<n;i++){
        a[i]=a[i+1];
    }
    a[n-1]=0;
    for(i=0;i<n;i++){
        printf("the value are %d\n",a[i]);
    }
}