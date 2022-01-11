#include<iostream>
#include<vector>
#include "bits/stdc++.h"

using namespace std;
//sorintg an vector using gcc sorting

int gcc()
{
    vector<int> v={4,2,6,7};
    sort(v.begin(),v.end());                 //syntax used for gcc sorting in case vectors

    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
}

int main()
{                                    
    int a[4]={3,6,7,4};
    sort(a,a+4);                       //gcc sort function with first and last+1 address of array

    for(int i=0;i<4;i++){               //loop for printing updated array
        cout<<a[i]<<" ";                   
    }
    cout<<endl;
    gcc();
}