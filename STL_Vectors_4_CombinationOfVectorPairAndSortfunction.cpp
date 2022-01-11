#include<iostream>
#include<vector>
#include<string>
//input name and marks of the students in the vector and sort them in descending marks odder the student display only name of the students.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,int>> v;
    int n;
    cout<<"Enter the no of element in vector:";
    cin>>n;
    
    string name[n];
    int marks[n];

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" Student Name And Marks:";
        cin>>name[i];
        cin>>marks[i];
    }
    
    for(int i=0;i<n;i++){
        v.push_back(make_pair(name[i],marks[i]));                               //we can insert an pair inside and pair only
    }                                                                           //so we want to convert two different array in pair in using make_pair() and then insert inside an vector                                                               
    
    sort(v.begin(),v.end());

    for(int i=n-1;i>=0;i--){
        cout<<v[i].first<<" ";
    }
}