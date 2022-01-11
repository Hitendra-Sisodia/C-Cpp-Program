#include<stdio.h>

int main()
{
    int lb,sb,h,A;
    printf("Enter the longbase,shortbase and height:");
    scanf("%d%d%d",&lb,&sb,&h);

    A=((lb+sb)/2)*h;
    printf("The are of trapzoid:%d",A);
    return 0;
}