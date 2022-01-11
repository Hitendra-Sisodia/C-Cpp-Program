#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    vector<int> v;                           //syntax for intiliazing vectors
    int n;
    cout<<"Enter the number of element to push in vectors:";          // input for number of elements in vectors
    cin>>n;

    for(int i=0;i<n;i++){                                              //loop for inserting element by defalut function in vectors
        int number;                                                         
        cout<<"Enter the number to push in vector with position"<<i+1<<":";
        cin>>number;
        v.push_back(number);
    }

    int p;
    cout<<"enter the number of element poped from vector in last in first out order:";
    cin>>p;
    for(int i=1;i<p;i++){                                                     //loop for poping elements from an vectors
        v.pop_back();
    }
    for(int j=0;j<n;j++){                                                    //loop for displaying elements
        cout<<v[j]<<" ";
    }
    return 0;
}