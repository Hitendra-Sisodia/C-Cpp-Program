#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=n-i;k>=1;k--){
            cout<<"   ";
        }
        for(int j=1;j<=(i*2)-1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}

//replace "*" by i and j to obtain different patterns.