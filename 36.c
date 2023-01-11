//C program to find second largest number and Sorting Using Bubble sort in an array.//
#include <stdio.h>
int main(){
    int i,n,j,temp;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the value of element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The Element in the Ascending order\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Second largest Number of an array\n");
    printf("%d",a[n-2]);
}
