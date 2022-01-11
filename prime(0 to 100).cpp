//print all prime number between 0 to 100

#include<iostream>
using namespace std;

int main()
{   
    int prime=0;
    for(int num=1;num<=100;num++){
        int update=0;
        for(int count=2;count<num;count++){
            if(num%count==0){
                update++;
                prime++;
                break;
            }
        }
        if(update==0){
            cout<<num<<endl;
        }
    
    }
    cout<<"the total primenumber between 1 to 100 are:"<<100-prime;
    return 0;
}