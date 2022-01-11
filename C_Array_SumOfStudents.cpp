
#include<stdio.h>
int main()
{
    int marks[10];
    int sum=0,stu=0;
    printf("Enter the number of students:");
    scanf("%d",&stu);
    
    for(int i=0;i<stu;i++){
        printf("Enter the marks of students %d:",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    printf("sum of %d students is:%d",stu,sum);
    return 0;
}