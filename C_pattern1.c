#include<stdio.h>

int main()
{
    int r;
    int c;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of colums:");
    scanf("%d",&c);

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}