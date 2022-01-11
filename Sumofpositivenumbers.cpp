//program to add positive numbers only

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the positive number only:";
    cin>>n;

    int sum=0;
    while(n>0){
        sum=sum+n;
        cout<<"enter the positive number only:";
        cin>>n;
    }

    cout<<sum<<endl;
    return 0;
}