#include<stdio.h>
int main()
{
    int days;
    printf("Enter the number of days:");
    scanf("%d",&days);

    int Years=days/365;  //No of years//
    int M=days%365;
    int Month=M/30;  //no of months//
    int Days=M%30; //no  of days//

    printf("Y:M:D=%d:%d:%d",Years,Month,Days);
    return 0;
}