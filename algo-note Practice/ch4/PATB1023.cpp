#include <cstdio>
#define maxn 50
int hasTable[10] = {0};
int ans[maxn] = {0};

int findmin(int a){
    if(a!=0){
        for(int i=0;i<10;i++){
            if(hasTable[i]!=0){
                hasTable[i]--;
                return i;
            }
    }
    }else{
        for(int i=1;i<10;i++){
        if(hasTable[i]!=0){
            hasTable[i]--;
            return i;
        }
    }
    }
}

void put_array(int len){
    for(int i=0;i<len;i++){
        ans[i]=findmin(i);
        printf("%d",ans[i]);
    }
}

int main(){
    int a,len=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a);
        hasTable[i]+=a;
        len+=a;
    }
    put_array(len);
    return 0;

}