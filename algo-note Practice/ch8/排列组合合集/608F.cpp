#include <cstdio>
#include <queue>
#include <iostream>
using namespace std;

struct node
{
    /* data */
    int x,y;
}Node;

const int maxn = 100;
int m,n;
int matrix[maxn][maxn];
bool inq[maxn][maxn] = {false};

bool judge(int x, int y){
    //越界 || 为0 已入队 -- return false
    if(1) return false;
    if(1) return false;
    return true;
}

void BFS(int x, int y){
    queue<node> q;
    Node.x = x;
    Node.y = y;
    if(judge(x,y)) q.push(Node);
}

int main(){
    scanf("%d %d",&m,&n);
    for(int x = 0; x < n; x++){
        for(int y = 0; y < m; y++){
            //此处可简化
            BFS(x,y);
        }
    }
    //输出队列
}

