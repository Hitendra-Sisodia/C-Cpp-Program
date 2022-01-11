#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int start='A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<char(start);
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
}