#include<stdio.h>
int div(int num)
{
    if(num%3==0 && num%5==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{  
    int n;
    printf("Enter the range of numbers:");
    scanf("%d",&n);

    printf("The number which divisible by 5 and 3 are\n");

    for(int num=1;num<=n;num++){
        if(div(num)){
            printf("%d\n",num);
        }
    }
    return 0;
}