//C program to print multiplication table of a number.//
/*Write a program to print a table of a number */
#include <stdio.h>
int main()
{
    int num,multiple;
    printf("Enter the table number:");
    scanf("%d",&num);
    for(multiple=1; multiple <= 10; multiple++)
    {
        printf("%d x %d = %d \n",num,multiple,num*multiple);
    }
    return 0;
}


