#include<stdio.h>
int main()
{
    int r;
    int c;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);

    for(int i=1;i<=5;i++){
        for(int j=1;j<=6-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}