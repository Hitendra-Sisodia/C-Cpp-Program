#include<iostream>
using namespace std;

int main()
{   
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            int c=i+j;
            if(c%2==0){
                cout<<"1"<<"  ";
            }
            else{
                cout<<"0"<<"  ";
            }
        }
        cout<<endl;
    } 
    return 0;
}