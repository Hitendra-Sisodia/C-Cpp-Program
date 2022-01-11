#include<stdio.h>

int main()
{
    int temp;
    printf("Enter the temp in celsius:");
    scanf("%d",&temp);

    int kelvin=temp+273;
    int fara=(temp*9/5)+32;

    printf("Temp in celusis:%d\n",temp);
    printf("Temp in kelvin:%d\n",kelvin);
    printf("Temp in fara:%d\n",fara);

    return 0;
}