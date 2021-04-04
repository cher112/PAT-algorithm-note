# include <cstdio>
# define maxn 20

int n,ans;

void generateC(int index){
    if(index == 1){
        ans++;
        return;
    }else if(index == 2){
        ans+=2;
        return;
    }
    
    generateC(index-1);
    generateC(index-2);

}

int main(){
    while(scanf("%d",&n)!=EOF){
        ans=0;
        generateC(n);
        printf("%d\n",ans);
    }
}