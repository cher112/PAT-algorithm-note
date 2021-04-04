# include <cstdio>
# include <cstring>
# include <algorithm>
using namespace std;
# define maxn 22

int Mscore[10];

struct Student
{
    /* data */
    char id[maxn];
    int score;

}stu[1000];

bool cmp(Student a, Student b){
    if(a.score!=b.score) return a.score > b.score;
    else return strcmp(a.id,b.id) > 0;
}

int main(){
    int N,M,G,A,i,j,m;
    while((scanf("%d",&N)!=EOF)){
        if(N==0) break;
        scanf("%d %d",&M,&G);
        //read score per text
        for(i=0;i<M;i++){
            scanf("%d",&Mscore[i+1]);
        }
        //read student in stu
        for(i=0;i<N;i++){
            scanf("%s %d",stu[i].id,&m);
            stu[i].score=0;
            for(j=0;j<m;j++){
                scanf("%d",&A);
                stu[i].score+=Mscore[A];
            }
        }
    sort(stu,stu+N,cmp);

    //output
    printf("%d\n",N);
    for(int k=0;k<N;k++){
        printf("%s %d\n",stu[k].id,stu[k].score);
    }

    }
    return 0;
}