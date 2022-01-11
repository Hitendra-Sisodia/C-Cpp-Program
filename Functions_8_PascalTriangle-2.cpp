#include<iostream>
using namespace std;

int fact(int num)
{
    int count=1;
    for(int i=num;i>=1;i--)
    count*=i;
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            int ans=fact(i)/(fact(i-j)*fact(j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}