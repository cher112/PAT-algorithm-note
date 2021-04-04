# include <stdio.h>
# include <string.h>
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};

bool isLeap(int yr){
    return (yr % 4 == 0 && yr % 100 !=0) || (yr % 400 ==0);
}

int main(){
    int dys,yrs,mon,m;
    
    scanf("%d",&m);
    while(scanf("%d %d %d",&yrs,&mon,&dys)!=EOF){

        dys++;
        //printf("day:%d\n",dys2);
        if(dys==(month[mon][isLeap(yrs)]+1)) { 
            mon++; 
            dys=1;
        }
        if(mon==13){
            yrs++;
            mon=1;
        }
            

        printf("%04d-%02d-%02d\n",yrs,mon,dys);
    }
}