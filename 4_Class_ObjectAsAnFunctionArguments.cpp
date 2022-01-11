//Class object as an argument of function and return it//


#include<iostream>
using namespace std;
class sample
{   
    public:
    int value;
    void read()
    {
        cout<<"Enter the number:";
        cin>>value;
    }
    void display()
    {
        cout<<"Number is:"<<value<<endl;
    }
    sample today(sample t)           //obj argument from main function converted as t(ditto copy)    
    {
        t.value+=10;
        return t;
    }
};


int main()
{
    sample obj,store;                 //class objects


    obj.read();
    obj.display();
    store=obj.today(obj);              //obj passing as an actual arguments in today function
    store.display();                    //store variable also create ditto copy of returned t value 
    obj.display();
}