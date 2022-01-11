#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number upto fibonacci series to be printed:";
    cin>>n;
    
    int a=0,b=1,c=0;
    for(int i=1;i<=n;i++){
        cout<<a<<","; 
        c=a+b; 
        a=b; 
        b=c; 
    }

    return 0; 
}