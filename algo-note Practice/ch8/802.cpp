# include <cstdio>
# include <vector>
using namespace std;

int array[100] = {0};
int res[100] = {0};
vector <int> A; //temp store 2 num;
int N,K,X,sumX,maxVal,maxVal2 = 0;
void DFS(int index, int sumN,int sumX){
    if(sumN == K && sumX == X){
        int temp = 0;
        
        if(temp > maxVal){
            maxVal = temp;
        }
        else if (temp == maxVal)
        {
            int temp1,temp2;
            for(int i = 0; i < K; i++){
                temp1 += array[i]*array[i];
                temp2 += res[i]*res[i];
            }
            if(temp2 > temp1){
                for(int i = 0; i < K; i++){
                    res[i] = array[i];
                }
            }
        }
        A.clear();
        return;
    }
    if(index == N || sumN > K || sumX > X) return;
    A.push_back(array[index]);
    DFS(index+1,sumN+1,sumX+array[index]);
    DFS(index+1,sumN,sumX);

}

int main(){
    scanf("%d %d %d",&N,&K,&X);
    for(int i = 0; i<N; i++){
        scanf("%d",&array[i]);
    }
    DFS(0,0,0);
    printf("%d",maxVal);
}