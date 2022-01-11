//class basic

#include<stdio.h>
#include<iostream>
using namespace std;

class student
{
    public:
    int roll;                      //we can define an int in calss;
    char name[30];                 //we can define char in class;
    void read()                     //we can define float in class;
    {                                 //we can define array in calss;
        cout<<"Enter rollno:";         //we can define object in calss;             calsses are same as structures main difference is about their accessibilty.
        cin>>roll;                                                                     //structure are always private
        cout<<"Enter name:";                                                            //but calsses can be private public and protected 
        cin>>name;                                                                      //objects are the variables used in classes
    }
    void display()
    {
        cout<<"Roll no is:"<<roll<<endl;
        cout<<"Name is:"<<name<<endl;
    }
};

int main()
{
    student obj;         //used as int x;
    obj.read();             //use obj. as prefix while using class objects
    obj.display();
    return 0;
}