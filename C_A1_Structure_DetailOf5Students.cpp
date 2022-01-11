//structure for storing 5 students details
#include<stdio.h>
struct students
{
    char *name;
    int enroll;
    double sapid;

};
int main()
{
    students a1[5];
    for(int i=0;i<5;i++){
        printf("Input %d student name Enroll and sapid:",i+1);                        //loop for input
        scanf("%s  %d  %d",&a1[i].name,&a1[i].enroll,&a1[i].sapid);
    }

    for(int i=0;i<5;i++){
        printf("                          %d Student\n",i);
        printf("Name:%s, Enrollement No:%d, SapdId:%d\n",a1[i].name,a1[i].enroll,a1[i].sapid);   //loop for output
    }
    return 0;
}