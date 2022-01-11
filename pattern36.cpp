#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=n;
    while(i>=1){
        int j=1;
        while(j<=n+1-i){
            cout<<char('A'+i+j-2);
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}
