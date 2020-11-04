//对应题目为 PAT A1025
#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;

struct student{
    char id[15];
    int local_num;
    int local_rank;
    int score;
}stu[30010];

bool cmp(student a,student b){
    if(a.score!=b.score){
        return a.score>b.score;
    }else return strcmp(a.id,b.id)<0;
}

int main(){
    int n,k; // n-numbers of test position k-size of a classroom
    scanf("%d",&n);
    int num=0; //count of stu
    for(int i = 0;i<n;i++){
        //traverse each test-pos
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%s %d",stu[num].id,&stu[num].score);
            stu[num].local_num = i+1;
            num++;
        }
        sort(stu+num-k,stu+num,cmp); //traverse and sort one classroom
        stu[num-k].local_rank=1;
        //cout<<stu[num-k].id<<" "<<stu[num-k].score<<" "<<stu[num- k].local_rank<<endl;

        for(int a=num-k+1;a<=num;a++){
            if(stu[a].score==stu[a-1].score){
                stu[a].local_rank=stu[a-1].local_rank;
            }else  stu[a].local_rank = a+1-num+k;
            //cout<<stu[a].id<<" "<<stu[a].score<<" "<<stu[a].local_rank<<endl;
        }
    }
    sort(stu,stu+num,cmp);
    cout<<num<<endl;
    for(int b=0;b<num;b++){
        if(b>0 && stu[b].score==stu[b-1].score){
            cout<<stu[b].id<<" "<<b<<" "<<stu[b].local_num<<" "<<stu[b].local_rank<<endl;    
        }else cout<<stu[b].id<<" "<<b+1<<" "<<stu[b].local_num<<" "<<stu[b].local_rank<<endl;
    }

    return 0;

}