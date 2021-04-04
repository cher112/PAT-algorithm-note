# include <cstdio>
# include <cstring>
# define max 202

int main(){
    char str[max];
    char ans[max];
    while(gets(str)!=NULL){
        int len = strlen(str);
        ans[len]='\0';
        for(int i=0;i<len;i++){
            ans[len-1-i] = str[i];
        }
        printf("%s",ans);
    }
}