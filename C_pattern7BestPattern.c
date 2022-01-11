//program to print heart pattern//
//Made by : HITENDRA SISODIA 

#include<stdio.h>
#include<string.h>

int main()
{   
    char a[50];
    printf("Enter your name:");
    gets(a);

    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    int len=strlen(a);

    for(int i=n/2;i<=n;i+=2){
        for(int j=1;j<n-i;j+=2){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");  
        }
        if(i==1){
            for(int j=1;j<=(((n*2)-(2*i)+1)-len)/2;j++){
                printf("*");
            }
            if(len%2==0){
                printf("%s*",&a);
            }
            else{
                printf("%s",&a);
            }

            for(int j=1;j<=(((n*2)-(2*i)+1)-len)/2;j++){
                printf("*");
            }

        }
        else{
            for(int k=1;k<=((n*2)-2*i)+1;k++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}