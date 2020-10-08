#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int &c,int &d){
    int temp;
    temp = d;
    d=c;
    c=temp;
}

int main(){
    int a=1,b=2;
    swap(a,b);
    cout << a << b;
    return 0;
}