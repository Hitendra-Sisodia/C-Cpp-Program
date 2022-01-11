#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter the number of rows:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" * ";
        }
        for(int k=1;k<=(i*2)-1;k++){
            if(k==1 || k==(i*2)-1){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        for(int l=1;l<=n-i;l++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
    //for downward sides.

    for(int a=1;a<=n;a++){
        for(int b=1;b<=a-1;b++){
            cout<<" * ";
        }
        for(int c=1;c<=((n+1)-a)*2-1;c++){
            if(c==1 || c==((n+1)-a)*2-1){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        for(int d=1;d<=a-1;d++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}