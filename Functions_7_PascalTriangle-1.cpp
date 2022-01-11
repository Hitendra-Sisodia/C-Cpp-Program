#include<iostream>
using namespace std;

int pascal(int num)
{
    for(int i=1;i<=num;i++){
        for(int k=num-i;k>=1;k--){
            cout<<" ";
        }
        int count=1;
        for(int j=1;j<=i;j++){
            if(j==1){
                cout<<1<<" ";
            }
            else{
                count=count*((i-1)-(j-1)+1)/(j-1);
                cout<<count<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of rows for pascal triangle:";
    cin>>n;

    pascal(n);
    return 0;
}