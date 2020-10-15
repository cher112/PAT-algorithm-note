# include <stdio.h>
# include <iostream>
# include <algorithm>
# include <vector>
# include <typeinfo>
# include <chrono>
using namespace std;

int main(){
    vector<int> a{6,3,5,4,2};
    int b[] = {4,6,3,7,5};
    //reverse
    reverse(a.begin(),a.end());
    for(auto i:a){ cout<<i<<" ";}// this i means the key of vector[ key ]
    for(auto i:b){cout<<i<<" ";}
    //sort()
    cout<<endl;
    sort(a.begin(),a.end());
    sort(b,b+5);
    for(auto i:a){ cout<<i<<" ";}
    for(auto i:b){ cout<<i<<" ";}
}