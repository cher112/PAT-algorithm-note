#include <stdio.h>
#include <algorithm>
using namespace std;
//有序插入数组
void insert(int *a,int b,int pox){
    for(int j=8;j>pox;j--){
        a[j+1]=a[j];
    }
    a[pox+1]=b;
}
int main(){
    int a[10],b;
    for(int i=0;i<=8;i++){
        scanf("%d",a+i);
    }
    scanf("%d",&b);

    if(a[8]<=b) a[9]=b;

    for(int i=0;i<=7;i++){
        if(a[i]<b && b<=a[i+1]){
            insert(a,b,i);
            break;
        }
    }

    for(int i=0;i<=9;i++){
        printf("%d\n",a[i]);
    }
}