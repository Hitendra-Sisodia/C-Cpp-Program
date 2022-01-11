//program to convert decimal to hexadecimal using function//
#include<stdio.h>
int dth(int n)
{
    int a[100]; //array is used to reverse the output rem//
    int count=0;
    while(n>0){
        int rem=n%16;
        a[count]=rem;
        n/=16;
        count++;
    }
    for(int j=count-1;j>=0;j--){
        printf("%d",a[j]);
    }
}
int main()
{
    int n;
    printf("Enter an number:");
    scanf("%d",&n);

    dth(n);
    return 0;
}