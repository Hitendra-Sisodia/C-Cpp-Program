#include<iostream>
using namespace std;
int main()
{   //1.using for loop
    int n1;
    cin>>n1;

    int sum1=0;

    for(int counter1=1;counter1<=n1;counter1++){
        sum1=sum1+counter1;
    }

    cout<<sum1<<endl;

    //2.using while loop
    int n2;
    cin>>n2;

    int counter2=1;
    int sum2=0;

    while(counter2<=n2){
        sum2=sum2+counter2;
        counter2++;
    }
    cout<<sum2<<endl;
     
    //3.using dowhile loop
    int n3;
    cin>>n3;

    int counter3=1;
    int sum3=0;

    do{
        sum3=sum3+counter3;
        counter3++;
    }while(counter3<=n3);

    cout<<sum3<<endl;

    return 0;
}