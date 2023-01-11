//C program to find all angles of a triangle if two angles are given.//
#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter the First angle of triangle");
    scanf("%f",&a);
    printf("Enter the second angle of triangle");
    scanf("%f",&b);
    c=180-a-b;
    printf("The Third angle of triangle is %f",c);
    rerurn 0;
}