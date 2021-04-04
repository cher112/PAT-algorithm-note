# include <stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d",n);
        scanf("%d",&n);
        printf("%d",n);
        if(n==1) break;
    }
}