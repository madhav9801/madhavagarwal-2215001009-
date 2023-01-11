//C program to calculate total, average and percentage and grades of five subjects//
#include <stdio.h>
void main(){
    float a,b,c,d,e,t,aver;
    printf("Enter the Number of first subject");
    scanf("%f",&a);
    printf("Enter the Number of second subject");
    scanf("%f",&b);
    printf("Enter the Number of third subject");
    scanf("%f",&c);
    printf("Enter the Number of four subject");
    scanf("%f",&d);
    printf("Enter the Number of fifth subject");
    scanf("%f",&e);
    t=a+b+c+d+e;
    aver=t/5;
    printf("Total Marks of Student is %f\n",t);
    printf("Average of The Student is %f\n",aver);
    if(aver>90){
        printf("Grade obtained is 'A'");
    }
    else if(aver>80 && aver<90){
        printf("Grade obtained is 'B'");
    }
    else if(aver>70 && aver<80){
        printf("Grade obtained is 'C'");
    }
    else if(aver>60 && aver<70){
        printf("Grade obtained is 'D'");
    }
    else if(aver>50 && aver<60){
        printf("Grade obtained is 'E'");
    }
    else if(aver>40 && aver<50){
        printf("Grade obtained is 'F'");
    }
    else if(aver>30 && aver<40){
        printf("Grade obtained is 'G'");
    }
    else{
        printf("Student is Failed");
    }
}