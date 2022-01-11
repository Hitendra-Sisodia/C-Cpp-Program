//hexadecimal to decimal using function

#include<stdio.h>
#include<math.h>

int htd(int n)
{
    int count=0;
    int i=0;
    while(n>0){
        while(i<100){
            int lastdigit=n%10;
            count+=lastdigit*pow(16,i);
            n/=10;
            i++;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the hexadecimal number:");
    scanf("%d",&n);

    printf("Number in decimal is:%d",htd(n));
    return 0;
}