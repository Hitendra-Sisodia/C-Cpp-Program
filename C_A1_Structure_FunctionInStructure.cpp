//structure array

#include<stdio.h>
struct students
{   
    
    int roll;
    char name[30];
    void input()
    {
        printf("Enter Roll no:");
        scanf("%d",&roll);
        printf("Enter your name:");
        scanf("%s",&name);
        
    }
    void display()
    {
        printf("Roll no:%d\nName:%s",roll,name);
    }
}obj;


int main()
{   
    students obj;
    obj.input();
    obj.display();
    return 0;
}