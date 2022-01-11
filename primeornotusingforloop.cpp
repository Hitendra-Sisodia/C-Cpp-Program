//prime or not

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number to check prime or not:";
    cin>>n;

    for(int counter=2;counter<n;counter++){
        if(n%counter==0){
            cout<<"non prime number"<<endl;
            break;
        }
        
       else{
           cout<<"prime number"<<endl;
           break;
       }
        
    }
    return 0;
}