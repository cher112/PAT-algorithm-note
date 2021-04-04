# include <stdio.h>
# include <string.h>
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};

bool isLeap(int yr){
    return (yr % 4 == 0 && yr % 100 !=0) || (yr % 400 ==0);
}

int main(){
    int dys1,yrs;

    while(scanf("%d",&yrs)!=EOF){
        int dys2=0,mon=1,ans=0;

        scanf("%d",&dys1);
        while (ans<dys1){
            dys2++;
            //printf("day:%d\n",dys2);
            if(dys2==(month[mon][isLeap(yrs)]+1)) { 
                mon++; 
                dys2=1;//printf("%d",mon2);
            }
            ans++;
        }
        printf("%04d-%02d-%02d\n",yrs,mon,dys2);
    }
}