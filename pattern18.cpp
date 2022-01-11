#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter the number of rows:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"   ";
        }
        for(int j=1;j<=i*2-1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int a=n;a>=1;a--){
        for(int b=1;b<=n-a;b++){
            cout<<"   ";
        }
        for(int c=1;c<=(a*2)-1;c++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}