#include<iostream>
using namespace std;

int prime(int num){
    int update=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            update++;
        }
    }
    if(update==0){
        cout<<num<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Enter the range of numbers:";
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        prime(i);
    }
    return 0;
}