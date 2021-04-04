# include <cstdio>
# include <algorithm>
# define maxn 102
using namespace std;

bool cmp(int a,int b){
    return a<b;
}

int main(){
    int N,i;
    int ans[maxn];
    while(scanf("%d",&N)!=EOF){
        for(i=0;i<N;i++){
            scanf("%d",&ans[i]);
        }
    
        sort(ans,ans+N);
    
        for(i=0;i<N;i++){
            printf("%d ",ans[i]);
        }
        printf("\n");
    }
    
}