#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

void mergeSort(int A[],int left,int right){
    //initial step is 2
    for(int step=2;step/2<=(left+right);step*=2){
        for(int i =0;i<(left+right);i+=step){
            sort(A+i,A+min(i+step-1,right));
        }
    }
}

int main(){
    int a[6]={3,1,4,2,5,10};
    mergeSort(a,0,4);
    for(auto i:a){
        cout<<i<<" ";
    }
}