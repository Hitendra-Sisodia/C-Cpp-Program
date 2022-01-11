#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n+1-i){
            cout<<j;
            j++;
        }
        int k=1;
        while(k<=2*i-2){
            cout<<"*";
            k++;
        }
        int t=n+1-i;
        while(t>=1){
            cout<<t;
            t--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}