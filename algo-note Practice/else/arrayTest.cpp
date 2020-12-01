#include <iostream>

void array(int a[10]){
    a[2]=3;
}

int main(){
    int a[10] = {1,1,1,1,1};
    std::cout<<a[2]<<std::endl;
    array(a);
    std::cout<<a[2];
}