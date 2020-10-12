#include <stdio.h>
#include <iostream>

using std::cout; using std::endl;

int main(){
    int j = 1,i=2;
    double res = static_cast<double>(j)/i;
    double res2 = j/i;
    cout<<res<<endl<<res2;
    return 0;
}