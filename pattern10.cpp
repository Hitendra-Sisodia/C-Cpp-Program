#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter the number of rows:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

//replace j with "*" and i to obtain diffferent patterns.