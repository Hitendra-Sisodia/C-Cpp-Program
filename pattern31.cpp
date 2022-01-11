//printing the pattern with start or an fixed values in string.

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
        while(j<=n){
            cout<<char(start);
            start++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}