#include <stdio.h>
#include <iostream>
#include<cmath>

using namespace std;

int res[10];

void merge(int a[],int res[],int m){
    int left = 0,right=5;
    while(left<<right){
        if(a[left]+a[right]=m){
            
        }else if(a[left])
    }
}//a是递增序列

int main(){
    int a[] = {1,2,3,4,5,6};
    merge(a,res,8);
    for(auto i:res){cout<<i<<endl;}
    return 0;
}