//. C program to find power and square root of any number//
#include <stdio.h>
#include <math.h>
void main(){
    int a,b,c,f;
    printf("Enter 1 if you want to use power function\nEnter 2 if you want to use square root function");
    scanf("%d",&a);
    if(a==1){
        printf("Enter the number you want to find the power");
        scanf("%d",&b);
        printf("Enter the value of power");
        scanf("%d",&c);
        f=pow(b,c);
        printf("The answer is %d",f);
    }
    else if(a==2){
        float d,e;
        printf("Enter the value of number you find out the square root");
        scanf("%f",&d);
        e=pow(d,0.5);
        printf("The Answer is %f",e);
    }
    else
    printf("Wrong Command");
}