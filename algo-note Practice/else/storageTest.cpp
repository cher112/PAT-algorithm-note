#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;

int main(){
    int a[30010];
    for(int i = 0;i<30010;i++){
        a[i] = i;
    }
    clock_t start_time=clock();
    for(int i = 0;i<sizeof(a)/4;i++){
       a[i]++;
    }   
    clock_t end_time=clock();
    cout<<(end_time-start_time)<<"ms"<<endl;

    return 0;
}