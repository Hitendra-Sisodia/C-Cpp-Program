#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to find factorial:";
    cin>>n;
    
    int count=1;
    for(int i=n;i>1;i--){
        count=i*count;
    }
    cout<<"factorial of the number is :"<<" "<<count;
    return 0;
}