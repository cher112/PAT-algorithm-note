#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a,int b){
    return a>b;
}
int main(){
    //test the using of pointer in algorithm::sort()

    int a[5] = {3,2,5,1,7};
    sort(a,a+5);
    for(auto i:a){cout<<i<<" ";}
    sort(a,a+5,cmp);
    for(auto i:a){cout<<i<<" ";}
    return 0;
}