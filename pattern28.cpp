#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter the number of rows:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        int pa=1;
        for(int j=1;j<=i;j++){
            if(j==1){
                cout<<pa<<" ";
            }
            else{
                pa=pa*((i-1)-(j-1)+1)/(j-1);
                cout<<pa<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}