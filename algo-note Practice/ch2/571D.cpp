# include<stdio.h>
# include<string.h>

void swap(char* a,char* b){
    char temp[20];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}

int main(){
    char a[20],b[20],c[20];
    scanf("%s %s %s",a,b,c);
    for(int i=0;i<=1;i++){
        int cmp1=strcmp(a,b);
        if(cmp1>0) swap(a,b);
        int cmp2=strcmp(b,c);
        if(cmp2>0) swap(b,c);
    }
    printf("%s\n%s\n%s",a,b,c);
}