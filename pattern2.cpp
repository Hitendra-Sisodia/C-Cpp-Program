#include<iostream>
using namespace std;

int main()
{   int rows,cols;
    cout<<"enter the rows and cols:";
    cin>>rows>>cols;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<i<<"  ";
        }
        cout<<endl;
    }
    return 0;
}