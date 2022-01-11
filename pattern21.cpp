#include<iostream>
using namespace std;

int main()
{   
    for(int a=1;a<=5;a++){
        for(int b=1;b<=5-a;b++){
            cout<<"   ";
        }
        int count=a;
        for(int c=1;c<=a;c++){
            cout<<count<<"  ";
            count--;
        }
        int inn=2;
        for(int d=1;d<=a-1;d++){
            cout<<inn<<"  ";
            inn++;
        }
        cout<<endl;
    }
    for(int i=1;i<=5;i++){
        for(int k=1;k<=i-1;k++){
            cout<<"   ";
        }
        int n=6-i;
        for(int j=1;j<=6-i;j++){
            cout<<n<<"  ";
            n--;
        }
        int in=2;
        for(int m=1;m<=5-i;m++){
            cout<<in++<<"  ";
        }
        cout<<endl;
    }
    return 0;
}