#include<iostream>
using namespace std;

int EAO(int num){
    if(num%2==0){
        cout<<"Even Number";
    }
    else{
        cout<<"Odd Number";
    }
}
int main()
{
    int n;
    cout<<"Enter the number to check Even or Odd:";
    cin>>n;

    EAO(n);
    return 0;
}