#include<iostream>
using namespace std;

int fact(int num){
    int count=1;
    for(int i=num;i>=2;i--){
        count*=i;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the number to factorial : ";
    cin>>n;

    cout<<fact(n);
}