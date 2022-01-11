//program to convert decimal to octal//


#include<stdio.h>
int dto(int n)
{
    int a[100];
    int count=0;
    while(n>0){
        int rem=n%8;
        a[count]=rem;
        n/=8;
        count++;
    }
    for(int j=count-1;j>=0;j--){
        printf("%d",a[j]);
    }
}
int main()
{  
    int n;
    printf("Input an decimal number:");
    scanf("%d",&n);

    dto(n);
    return 0; 
}