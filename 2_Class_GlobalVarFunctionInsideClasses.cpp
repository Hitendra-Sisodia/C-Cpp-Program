//classes using global variable accessing:://

#include<stdio.h>
#include<iostream>
using namespace std;

class student 
{
    public:
    int roll;
    char name[30];
    void read()
    {
        cout<<"Enter roll no:";
        cin>>roll;
        cout<<"Enter name:";
        cin>>name;
    }
    void display();                                   //pre defination of function is requried inside  classes for global variable accessing//
};
 
void student :: display()                                  //syntax used for using function outside the class
{
    cout<<"roll no is:"<<roll<<endl;
    cout<<"Name is:"<<name<<endl;
}

int main()
{
    student obj;

    
    obj.read();
    obj.display();
    return 0;
}

