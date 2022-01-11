//global class and local class accessing//


#include<iostream>
using namespace std;
class global
{   
    public:
    void globalfunction()
    {
        cout<<"This is global function/class"<<endl;
    }
}obj;


void function()                                                    //Anything decalred outside the main function considered as global
{                                                                  //for eq. void function is global in this program
    class local
    {   
        public:
        void localfunction()
        {
            cout<<"This is local function/class"<<endl;
        }
    }oo;
    obj.globalfunction();                                        //local class is only valid inside function
    oo.localfunction();
}

int main()
{
    global obj;
    obj.globalfunction();                                           //we cannot access local class from any other function
    function();                                                     //we can access global calss from anywhere program using object eq: obj; for this program
    return 0;
}