#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    int a[10];
    for(int i=0;i<=9;i++){
        scanf("%d",a+i);
    }
    for(int j=0;j<=4;j++){
        swap(a+j,a+9-j);
        //printf("%d %d",*(a+j),*(a+9-j));
    }
    for(int k=0;k<=9;k++){
        printf("%d\n",a[k]);
    }
}