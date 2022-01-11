#include<stdio.h>
int dtb(int n)
{   
    int a[100];
    int count=0;
    while(n>0){
        int rem=n%2;
        a[count]=rem;
        n/=2;
        count++;
    }
    for(int j=count-1;j>=0;j--){
        printf("%d",a[j]);
    }
}
int main()
{
    int n;
    printf("Input the number in decimal:");
    scanf("%d",&n);
    
    dtb(n);
    return 0;
} 