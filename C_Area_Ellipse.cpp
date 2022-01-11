#include<stdio.h>

int main()
{
    int a,b,A;

    printf("Enter the minor axis,major axis:");
    scanf("%d%d",&a,&b);

    A=3.14*a*b;
    printf("area of ellipse is:%d",A);

    return 0;
}