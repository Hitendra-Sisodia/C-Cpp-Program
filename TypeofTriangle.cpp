#include<iostream>
using namespace std;

int main()
{
    int side1,side2,side3;
    cout<<"enter the three sides"<<endl;
    cin>>side1>>side2>>side3;

    if(side1==side2 && side2==side3){
        cout<<"equilateral triangle"<<endl;
    }
    else if(side1==side2 || side2==side3 || side3==side1){
        cout<<"isosceles traingle"<<endl;
    }
    else{
        cout<<"scalen triangle"<<endl;
    }

    return 0;
}