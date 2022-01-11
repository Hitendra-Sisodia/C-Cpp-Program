#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    if(year%4==0){
        printf("leap year");
    }
    else{
        printf("Non Leap year");
    }
    return 0;
}