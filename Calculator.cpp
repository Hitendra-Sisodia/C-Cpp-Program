#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n1;
    cout<<"Enter the first number:";
    cin>>n1;

    int n2;
    cout<<"Enter the second number:";
    cin>>n2;

    char opr;
    cout<<"Enter the operator:";
    cin>>opr;

    switch(opr)
    {
    case '+':
        cout<<"sum of "<<n1<<" & "<<n2<<" is = "<<n1+n2<<endl;
        break;

    case '-':
        cout<<"sub of "<<n1<<" & "<<n2<<" is = "<<n1-n2<<endl;
        break;

    case '*':
        cout<<"product of "<<n1<<" & "<<n2<<" is = "<<n1*n2<<endl;
        break;

    case '/':
        cout<<"division of "<<n1<<" & "<<n2<<" is = "<<n1/n2<<endl;
        break;

    case '^':
        cout<<n1<<" To power "<<n2<<" is = "<<pow(n1,n2)<<endl;
        break;

    default:
        cout<<"I am still learing more"<<endl;
        break;
    }
    return 0;

}