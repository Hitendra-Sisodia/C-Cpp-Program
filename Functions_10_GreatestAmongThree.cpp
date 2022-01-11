#include<iostream>
using namespace std;

int three(int num1,int num2,int num3){
    if(num1>num2){
        if(num1>num3){
            cout<<"Max:"<<num1<<endl;
            if(num2>num3){
                cout<<"Min:"<<num3;
            }
            else{
                cout<<"Min:"<<num2;
            }
        }
        else{
            cout<<"Max:"<<num3<<endl;
            cout<<"Min:"<<num2;
        }
    }
    else{
        if(num2>num3){
            cout<<"Max:"<<num2<<endl;
            if(num1>num3){
                cout<<"Min:"<<num3;
            }
            else{
                cout<<"Min :"<<num1;
            }
        }
        else{
            cout<<"Max:"<<num3<<endl;
            cout<<"Min:"<<num1;
        }
    }
}

int main()
{   
    int a,b,c;
    cout<<"Enter the three numbers:"
    cin>>a>>b>>c;

    three(a,b,c);
    return 0;
}