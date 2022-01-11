//pair function usage- Used for Returning mutliple types value from an function like string,int both
#include<iostream>
#include<vector>

using namespace std;
int main()
{
    pair<int,string> v={1,"hitendra"};              //syntax for pairing
    v.first =11;                                    // we can pair only two values it can be vector array string char anything.
    cout<<v.first<<"    "<<v.second; 
    return 0;
}