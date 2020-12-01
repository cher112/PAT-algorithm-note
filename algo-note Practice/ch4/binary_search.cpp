#include <stdio.h>
#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

const double eps = 1e-5;//精度位10^-5

int binary_search(int a[],int left,int right,int res){
    int mid;
    while(left<=right){
        int mid  = (left+right)/2;
        if(a[mid]==res){
            return a[mid];
        }else if(a[mid]<res){
            left=mid+1;
        }else if(a[mid]>res){
            right=mid-1;
        }
    }
    return -1;
}//普通2分法

int findmax(int a[],int left,int right,int res){
    
    int mid;
    while(left<=right){
        int mid  = (left+right)/2;
        if(a[mid]==res){
            return a[mid];
        }else if(a[mid]<res){
            left=mid+1;
        }else if(a[mid]>res){
            right=mid-1;
        }
    }
    return -1;
}

double binary_cal(double a,double left,double right,int res){
    double mid;
    while(right-left>eps){
        double mid  = (left+right)/2;
        if(mid==res){
            return mid;
        }else if(mid<res){
            left=mid;
        }else if(mid>res){
            right=mid;
        }
    }
    return mid;
}//数学2分法

int main(){
    int a[10]={1,2,3,4,5,7};
    double b = sqrt(2);
    int res = binary_search(a,0,5,2);

    double res_2 = binary_cal(2,1,2,b);
    cout<<res<<endl<<setprecision(3)<<res_2<<endl;
    cout<<res_2-b<<endl;
    return 0;
}