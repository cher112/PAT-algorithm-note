#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    //test the using of pointer in algorithm::sort()

    int a[10] = {3,2,5,1,7};
    sort(a+1,a+4);
    for(auto i:a){cout<<i<<" ";}
    cout<<endl<<*(a+1);
    return 0;
}