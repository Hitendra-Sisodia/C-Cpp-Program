#include<stdio.h>

int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);

    int c;
    printf("Enter the number of columns:");
    scanf("%d",&c);

    for(int i=1;i<=r;i++){
        for(int k=5-i;k>=1;k--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0; 
}