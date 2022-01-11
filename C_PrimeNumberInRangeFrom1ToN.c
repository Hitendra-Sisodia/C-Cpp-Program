#include<stdio.h>

int prime(int num)
{
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
    int n;
    printf("Enter the number to check prime or not:");
    scanf("%d",&n);
    
    printf("Prime Numbers are:");
    for(int num=1;num<=n;num++){
        if(prime(num)){
            printf("%d,",num);
        }
    }
    return 0;
}