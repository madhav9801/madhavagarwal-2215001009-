//C program to swap two numbers USING 3RD VARIABLE AND WITHOUT 3RD VARIABLE//
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the values of a and b ");
    scanf("%i %i",&a,&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("Value of a is %d and value of %i",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a is %d and value of %i",a,b);
    return 0;
}


