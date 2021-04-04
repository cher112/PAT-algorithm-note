# include <cstdio>
# include <cstring>
# define max 256
int main(){
    char str[max];
    while(scanf("%s",str)!=EOF){
        int len = strlen(str);
        int ans=0;
        for(int i=0;i<len/2;i++){
            if(str[i]==str[len-1-i]){
                ans++;
            }
        }
        if(ans==(len/2)) printf("Yes\n");
        else printf("No\n");
        
    }
    
    return 0;
}