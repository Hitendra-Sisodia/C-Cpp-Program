#include<iostream>
using namespace std;

int main()
{   int n;
    cout<<"enter the number of rows:";
    cin>>n;

    int in= 1 ;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<in++<<"  ";
        }
        cout<<endl;
    }
    return 0;
}