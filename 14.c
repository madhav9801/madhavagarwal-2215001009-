//C program to check positive negative or zero using switch case.//
#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    switch(a>0)
    {
        case 1: printf("Positive");
        break;
        case 0: printf("Negative");
    }
    switch (a==0)
    case 1:printf("Zero");
    return 0;
}
