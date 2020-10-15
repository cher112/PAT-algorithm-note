#include <stdio.h>
#include <iostream>
using namespace std;

class A{
    public:
    A(int a){res=a;}
    int res;
    int getInfo(){return 1;}
};
int main(){
    int i;
    A a{1};
    cout<<a.getInfo()<<endl;
    int i = A::res;
}