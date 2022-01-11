//program to enter 5 numbers in array//

#include<stdio.h>

int main()
{
    int a[5]={};
    printf("input the elements:");

    for(int i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
   
   //Program to display array//

    for(int j=0;j<=4;j++){
        printf("a[%d]:%d\n",j,a[j]);
    }
    return 0;
}