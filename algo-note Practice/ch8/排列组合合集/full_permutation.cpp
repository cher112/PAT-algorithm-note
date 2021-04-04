# include <cstdio>

const int maxn = 11;
int n;
int P[maxn],hashTable[maxn] = {false};
//P is output of full permutation

//generate permutation start with nuber index;
void generateF(int index){
    //recursion borden
    if(index == n+1){
        for(int i=1;i<=n;i++){
            printf("%d ",P[i]);
        }
        printf("\n");
        return;
    }else
    {
        for(int x=1;x<=n;x++){
            if(hashTable[x]==false){
                P[index] = x; //notice the diff between index & x
                hashTable[x] = true;
                generateF(index+1);
                hashTable[x] = false;
            }
        }
    }
}

int main(){
    scanf("%d",&n);
    generateF(1);
    return 0;
}   