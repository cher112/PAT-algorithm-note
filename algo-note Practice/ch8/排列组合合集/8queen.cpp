#include <cstdio>
#include <cmath>
const int maxn  = 20;
int P[maxn],A[maxn],HashTable[maxn] = {false};
int n,count;

bool validQueen(){
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j<=n; j++){
            if(abs(P[i] - P[j])  == abs(i - j) || P[i] == P[j]){
                return false;
            }
        }
    }
    return true;
}
void generateP(int index){
    if(index == n+1 && validQueen()){
        for(int i = 1; i <= n; i++){
            printf("%d ",P[i]);
        }
        printf("\n");
        count++;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(HashTable[i] == false){
            HashTable[i] = true;
            P[index] = i;
            generateP(index+1);
            HashTable[i] = false;
        }
    }
}

int main(){
    count = 0;
    scanf("%d",&n);
    generateP(1);
    if(count == 0) printf("no solute!");
}