#include<iostream>
using namespace std;

int main()
{  
    int n;
    cout<<"Enter an number:";
    cin>>n;

    int count=0;
    while(n>0){
        int lastdigit=n%10;
        count=count*10+lastdigit;
        n=n/10;
    }
    cout<<count;
    return 0;
}