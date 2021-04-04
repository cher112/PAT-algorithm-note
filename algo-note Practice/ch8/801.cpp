#include<cstdio>
#include<iostream>
using namespace std;
int n,V,maxValue,sumW,sumC = 0;;
int w[30],c[30] = {0};

void DFS(int index,int sumW,int sumC){
    if(index == n+1){
        if(sumW <= V && sumC > maxValue){
            maxValue = sumC;
        }
        return;
    }else if(sumW < V){
        DFS(index+1,sumW,sumC);
        DFS(index+1,sumW+w[index],sumC+c[index]);
    }else return;
}
int main(){
    scanf("%d %d",&n,&V);
    for(int i = 1; i<=n; i++){
        scanf("%d",&w[i]);
    }
    for(int i = 1; i<=n; i++){
        scanf("%d",&c[i]);
    }
    DFS(1,sumW,sumC);
    printf("%d",maxValue);
    return 0;
}