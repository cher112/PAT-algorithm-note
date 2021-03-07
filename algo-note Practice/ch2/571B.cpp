#include <stdio.h>

void swap(int* a,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void cmp(int* a,int* b,int* c){
    for(int i=0;i<=1;i++){
    if(*a<*b){
        swap(a,b);
    }
    if(*b<*c){
        swap(b,c);
    }
    }
}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    cmp(&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    
    return 0;
}