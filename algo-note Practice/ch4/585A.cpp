#include <cstdio>
#define maxn 200
int a[maxn] = {0};

int findx(int n,int x){
    int left = 0;
    int right = n-1;
    int mid;
    while(left<=right){
        mid = left + (right-left)/2;
        if(a[mid]==x){
          return mid;   
        }
        else if(a[mid]>x){
            right = mid-1;
        } 
        else if(a[mid]<x){
            left = mid+1;            
        } 
    }
    return -1;
}
int main(){
    int n,x,res;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d",a+i);
        }
        scanf("%d",&x);
        res = findx(n,x);
        printf("%d\n",res);
    }
    return 0;
}