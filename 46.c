//C program to find diameter, circumference and area of a circle using functions//
#include<stdio.h>
float dia(float r)
{
    float k=r+r;
    return k;
}
float circ(float r)
{
    float k=2*3.14*r;
    return k;
}
float area(float r)
{
    float k=3.14*r*r;
    return k;
}
int main()
{
    float r,s;
    scanf("%f",&r);
    s=dia(r);
    printf("Diameter of circle is %f\n",s);
    printf("Circumference of circle is %f\n",circ(r));
    printf("Area of circle is %f",area(r));
    return 0;
}
