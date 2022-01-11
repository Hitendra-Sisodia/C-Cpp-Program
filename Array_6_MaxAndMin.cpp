#include<iostream>
using namespace std;

int main()
{
    int a[10]={1,4,2,6,9,34};
    int max=a[0];

    for(int i=1;i<=5;i++){
        if(max<a[i]){
            max=a[i];
        }
    }

    int min=a[0];
    for(int j=1;j<=5;j++){
        if(min>a[j]){
            min=a[j];
        }
    }
    cout<<"Max number is:"<<max<<endl;
    cout<<"Min number is:"<<min;
    return 0;
}

