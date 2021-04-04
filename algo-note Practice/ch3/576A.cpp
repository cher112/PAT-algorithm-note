# include <stdio.h>
const int maxn=1000;
int group[maxn]={0};

int main(){
    int n,score,x;
    int res=0;
    while(scanf("%d",&n)!=EOF){
        res=0;
        if(n==0) break;
        for(int i=0;i<n;i++){
            scanf("%d",&group[i]);
        }
        scanf("%d",&x);
        for(int i=0;i<n;i++){
            if(group[i]==x) res+=1;
        }
        printf("%d\n",res);
    }
    return 0;
}