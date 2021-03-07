# include<stdio.h>
void swap(int* a,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void pp(int *a){
    int px=0;
    int pn=0;
    int max = a[0];
    int min =a[0];
    for(int i=1;i<=9;i++){
        if(a[i]>max){
            max=a[i];
            px=i;
        }
        if(a[i]<min){
            min=a[i]; 
            pn=i;
        }
    }

    swap(&a[0],&a[pn]);
    swap(&a[9],&a[px]);
}

int main(){
    int a[20];
    for(int i=0;i<=9;i++){
        scanf("%d",a+i);
    }
    pp(a);
    for(int i=0;i<=9;i++){
        printf("%d ",a[i]);
    }
    return 0;
}