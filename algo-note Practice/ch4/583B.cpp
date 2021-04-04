# include <cstdio>
# define maxn 21

int m,a,ans[maxn]={0};

int generateF(int index){
    if(index == 2 || index == 3) return 1;
    if(index == 1) return 0;
    
    a = generateF(index-1)+generateF(index-2);

    ans[index] = a;
    return a;
}

int main(){
    ans[1] = 0;
    ans[2] = 1;
    ans[3] = 1;
    int n;
    generateF(maxn);
    scanf("%d",&m);
    while(scanf("%d",&n)!=EOF){
        for(int i=1;i<=n;i++){
            for(int k=1;k<=n-i;k++){
                printf("  ");
            }

            for(int j=1;j<=(2*i-1);j++){
                printf("%d ",ans[j]);
            }
            printf("\n");
        }
    }
}