#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int temp=0;
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=(2*i-1)){
            if(j<=i){
                temp++;
                cout<<temp;
            }
            else if(j>i){
                temp--;
                cout<<temp;
            }
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}