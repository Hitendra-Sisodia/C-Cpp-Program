#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER THE NUMBER TO CHECK PRIME OR NOT:"<<endl;
    cin>>n;
    
    int sum=0;

    for(int count=2;count<n;count++){
        if(n%count==0){
            sum++;  
        }
    }
    cout<<"No of multiples other than 1 or number itself:"<<sum<<endl;
    cout<<"Total of multiples other:"<<sum+2<<endl;

        if(sum==0){
            cout<<"prime number"<<endl;
        }
        else{
            cout<<"composite number"<<endl;
        }
    return 0;
}