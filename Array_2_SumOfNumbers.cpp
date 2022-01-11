#include<iostream>
using namespace std;

int main()
{
    int n[10];
    cout<<"Enter the elements in array for sum:";
    for(int i=0;i<=9;i++){
        cin>>n[i];
    }
    int update=0;
    for(int k=0;k<=9;k++){
        update+=n[k];
    }
    cout<<"The total sum of enterd number is:"<<update<<endl;
    return 0;
}