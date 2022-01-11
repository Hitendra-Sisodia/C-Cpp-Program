//octal to decimal using function

#include<stdio.h>
#include<math.h>

int otd(int n)
{
    int count=0;
    int i=0;
    while(n>0){
        while(i<100){       //for running the power of i starting from 0
            int lastdigit=n%10;
            count+=lastdigit*pow(8,i);
            n/=10;
            i++;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the octal number:");
    scanf("%d",&n);

    printf("The number in decimal is:%d",otd(n));
    return 0;
}