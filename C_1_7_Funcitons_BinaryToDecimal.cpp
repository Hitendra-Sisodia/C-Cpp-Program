//binary to decimal conversion using function

#include<stdio.h>
#include<math.h>

int btd(int n)
{   
    int count=0;
    int i=0;

    while(n>0){
        while(i<=100){
            int lastdigit=n%10;
            count+=lastdigit*pow(2,i);
            n/=10;
            i++;
        }
    } 
    return count;
}
int main()
{
    int n;
    printf("Enter the binary number:");
    scanf("%d",&n);

    printf("Decimal number is:%d",btd(n));
    return 0;
}