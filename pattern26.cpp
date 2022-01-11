#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter the number of rows:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                cout<<" * ";
        }
        for(int k=1;k<=(n-i)*2;k++){
            cout<<"   ";
        }
        for(int l=1;l<=i;l++){
            cout<<" * ";
        }
        cout<<endl;
    }

    //for inverted side.

    
    for(int a=1;a<=n;a++){
        for(int b=1;b<=(n+1)-a;b++){
            cout<<" * ";
        }
        for(int c=1;c<=(a*2)-2;c++){
            cout<<"   ";
        }
        for(int d=1;d<=(n+1)-a;d++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}