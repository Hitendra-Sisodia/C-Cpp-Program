#include<stdio.h>

int main()
{
    int r;
    int c;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of coloms:");
    scanf("%d",&c);

    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}