#include<iostream>
#include<math.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int root1,root2;

    printf("Enter the cofficient of x square then x then constant seperated by space:");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    int d=num2*num2-4*num1*num3;
    if(d>0){
        root1= (-num2+sqrt(d))/2*num1;
        root2= (-num2-sqrt(d))/2*num1;
        printf("The roots of the qudratic equation are: %d and %d",root1,root2);
    }
    if(d=0){
        root1=-num2/(2*num1);
        root2=-num2/(2*num1);
        printf("The roots of the qudratic equation are: %d and %d",root1,root2);
    }
    if(d<0){
        printf("Roots are Img");
    }
    return 0;
}