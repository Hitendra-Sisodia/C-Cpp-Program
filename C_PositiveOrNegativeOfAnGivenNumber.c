#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num==0){
        printf("Number is equal to zero");
    }
    if(num<0){
        printf("Number is negative");
    }
    if(num>0){
        printf("Number is positive");
    }
    return 0;
}