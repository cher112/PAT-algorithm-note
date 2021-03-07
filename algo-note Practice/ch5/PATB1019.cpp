#include <algorithm>
#include <iostream>
using namespace std;

int RES[4]={};

bool cmp(int a,int b){
    return a>b;
    //initial is a<b to get MAX,need to rebuild cmp
}

//noticed that every number need to show in 4-bit
//so to restrict 4-bit, use array[4] instead int

void to_array(int a){
    for(int i=0;i<4;i++){
        RES[i]=a%10;
        a /=10;
    }
} 

int to_num(){
    int num=0;
    for(int i=3;i>=0;i--){
        num=num*10+RES[i];
    }
    return num;
}

int main(){
    int a=0;
    int max,min,res;

    scanf("%d",&a);
    to_array(a);
    sort(RES,RES+4);
    max=to_num();
    sort(RES,RES+4,cmp);
    min=to_num();
    res=max-min;
    printf("%04d");


    return 0;
}