#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j1=1;j1<=i;j1++){
            cout<<" * ";
        }
        for(int k=1;k<=8-(i*2);k++){
            cout<<"   ";
        }
        for(int j2=1;j2<=i;j2++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int a=1;a<=4;a++){
        for(int b=1;b<=5-a;b++){
            cout<<" * ";
        }
        for(int c=1;c<=(8-(5-a)*2);c++){
            cout<<"   ";
        }
        for(int d=1;d<=5-a;d++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}