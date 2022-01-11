#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=5-i;k++){
            cout<<"   ";
        }
        int a=i;
        for(int j=1;j<=i;j++){
            cout<<a<<"  ";
            a--;
        }
        int m=2;
        for(int x=1;x<=i-1;x++){
            cout<<m<<"  ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}