#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=(n-i);j>=0;j--){
            cout<<i<<"  ";
        }
        cout<<endl;
    }
    return 0;
}