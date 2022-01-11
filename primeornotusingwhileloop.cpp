//prime or not using while loop

#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter the number to check prime or not:";
    cin>>n;

    int counter=2;

    while(counter<n){
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

