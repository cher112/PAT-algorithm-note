# include <stdio.h>
# include <vector>
using namespace std;

vector<int> odd{1,3,5,7,8,10,12};
vector<int> even{4,6,9,11};

bool isLeap(int a){
    if(a % 4==0 && a % 100 !=0 || a % 400 == 0){
        return true;
    }
    else return false;
}//leap year has 366 days

bool find(vector<int> a,int month){
    for(auto i:a){
        if(i==month){
            return true;
        }
    }
    return false;
}

vector<int> sep(int data){
    vector <int> res;
    res.push_back(data/10000);
    data-=((data/10000)*10000);
    res.push_back(data/100);
    data-=((data/100)*100);
    res.push_back(data);
    return res;
}

int M2D(int month,int year){
    if(find(odd,month)){return 31;}
    else if(find(even,month)){return 30;}
    else if(month==2){
        if(isLeap(year)){return 29;}else{return 28;}
    }
    return 0;
}

int main(){
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        if(a>b){swap(a,b);}
        vector<int>yr1=sep(a);
        vector<int>yr2=sep(b); 
        int ans = 1;
        while(yr1[0]<yr2[0] || yr1[1]<yr2[1] || yr1[2]<yr2[2]){
            //cout<<yr1[0]<<yr1[1]<<yr1[2]<<endl;
            yr1[2]++;
            if(yr1[2]==M2D(yr1[1],yr1[0])+1){yr1[2]=1;yr1[1]++;}
            if(yr1[1]==13){yr1[0]++;yr1[1]=1;}
            ans++;
        }
        printf("%d\n",ans);   
    }
    return 0;
}