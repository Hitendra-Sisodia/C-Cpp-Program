#include<iostream>
using namespace std;

int prime(int n)
{   
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        cout<<"Prime number"<<endl;;
    }
    else{
        cout<<"Non prime number"<<endl;;
    }
    cout<<"Number "<<n<<" get divisible "<<count<<" times.";
}
int main()
{
    int n;
    cout<<"enter the number to check prime or not:";
    cin>>n;

    prime(n);
    return 0;
}