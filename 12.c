//C program to create Simple Calculator AND Days of week using switch case.//
#include<stdio.h>
int main()
{
    int action;
    int a,b;
    printf("Enter value of first operand ");
    scanf("%i",&a);
    printf("Enter the value of second operand ");
    scanf("%i",&b);
    printf("Addition-1\n");
    printf("Subtraction-2\n");
    printf("Multiplication-3\n");
    printf("Division-4\n");
    printf("Enter the value of action ");
    scanf("%i",&action);
    switch(action){
        case 1:
            printf("%i",(a+b));
            break;
        case 2:
            printf("%i",(a-b));
            break;
        case 3:
            printf("%i",(a*b));
            break;
        case 4:
            printf("%i",(a/b));
    }return 0;
}