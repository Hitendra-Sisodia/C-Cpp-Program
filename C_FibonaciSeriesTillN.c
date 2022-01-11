#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number till fibonaci series to be printed:");
    scanf("%d",&n);
    
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        int c=a+b;
        printf("%d,",a);
        a=b;
        b=c;
    }

    return 0;
}