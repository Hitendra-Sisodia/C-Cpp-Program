//hwo to take input in vectors from user
#include<bits/stdc++.h>
using namespace std;

void vectprint(vector<int> v)      //expensive to use in case of time complixity as dito copy is created     //function for displaying elements of the vectors
{
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}



int main()
{
    vector<int> v;
    int n;                      //input number of element in vector
    cin>>n;

    for(int i=0;i<n;i++){   //input element from user
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    vector<int> v1=v;      //dito copy is created without taking any refrences
    v1.push_back(3);
    vectprint(v1);
    vectprint(v);

    return 0;
}