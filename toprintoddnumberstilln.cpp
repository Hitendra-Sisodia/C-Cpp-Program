//prg to print odd numbers till n

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number to print all odd numbers till n:";
    cin>>n;

    for(int count=1;count<=n;count++){
        if(count%2==0){
            continue;
        }
        cout<<count<<endl;
    }
    return 0;
}