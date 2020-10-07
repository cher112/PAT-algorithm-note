#include<stdio.h>

int main(){
    int a[10] = {3,1,4,5,2};
    for(int i = 1;i<=4;i++){
        for(int j = 0;j<5-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int k=0;k<5;k++){
        printf("%d",a[k]);
    }
    return 0;
    
}