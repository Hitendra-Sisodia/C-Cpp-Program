#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter the number of rows:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }
        for(int k=1;k<=5;k++){
            if(k==1 || k==5){
                cout<<" * ";
            }
            else if(i==1 || i==n){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}