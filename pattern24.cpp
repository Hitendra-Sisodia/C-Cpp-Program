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
        for(int j=1;j<=(i*2)-1;j++){
            if(j==1 || j==(i*2)-1){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }

    //for inverted part.
    
    for(int a=1;a<=n;a++){
        for(int b=1;b<=a-1;b++){
            cout<<"   ";
        }
        for(int c=1;c<=(n+1-a)*2-1;c++){
            if(c==1 || c==(n+1-a)*2-1){
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