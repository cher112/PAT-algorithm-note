# include <stdio.h>
# include <string.h>
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
char week[7][12]={"Sunday","Monday","Tuesday","Wednesday","Thusday","Friday","Saturday"};

char monthname[13][12]={
    "",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"  };
//module way to calcute days in leap?

bool isLeap(int yr){
    return (yr % 4 == 0 && yr % 100 !=0) || (yr % 400 ==0);
}

int main(){
    char str[12];
    int dys1,mon1,yrs1,i;

    while(scanf("%d",&dys1)!=EOF){
        int dys2=29,mon2=12,yrs2=999,ans=0;
        scanf("%s",str);
        for(i=1;i<=12;i++){
            if(strcmp(str,monthname[i])==0) {
                mon1=i;
                break;
            }
        }
        scanf("%d",&yrs1);
        while (yrs2<yrs1 || mon2<mon1 || dys2<dys1){
            dys2++;
            //printf("day:%d\n",dys2);
            if(dys2==(month[mon2][isLeap(yrs2)]+1)) { 
                mon2++; 
                dys2=1;//printf("%d",mon2);
            }
            if(mon2==13) {
                yrs2++;
                mon2=1; //printf("%d\n",yrs2);
            }
            ans++;
        }
        
        //from days/yr to week
        int wks = ans % 7;
        //printf("ans = %d\n",ans);
        printf("%s\n",week[wks]);
    }
}