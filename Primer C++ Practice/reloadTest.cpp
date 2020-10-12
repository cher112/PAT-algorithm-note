#include <stdio.h>
#include <iostream>

using std::cout; using std::endl;

int main(){
    int i = 1;
    const int &p = i;
    i++;
    cout<<p<<endl;
    int &q = i;
    q++;
    cout<<q<<endl<<i<<endl;
    /*test the const, if p++, error: increment of read-only reference 'p'*/

}