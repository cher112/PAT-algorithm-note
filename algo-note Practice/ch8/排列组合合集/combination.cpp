#include <cstdio>
#include <algorithm>
#include <cmath>
#define maxn  22;
using namespace std;

int n,k,sum,res;
int P[22] = {0};
int A[22] = {0};
//输出全部组合

bool check(int num){
    //check whether num is prime number;
	if(num == 1)
		return false;
	for(int i = 2; i <= (int)sqrt(1.0 * num); i++)
		if(num % i == 0)
			return false;
			
	return true;
}

void generateP(int curP,int curA){
    if(curP == k+1){
        //if(check(sum)) res++;
        for(int i = 1; i <= k; i++){
            printf("%d ",P[i]);
        }
        printf("\n");
        return;
    }
        for(int i = curA; i <= n;i++){
            P[curP] = A[i];
            if(curP == 0 && i != 0) return;
            generateP(curP+1,i+1);
            //sum -= A[i];
        }
}
int main(){
    scanf("%d %d",&n,&k);
    for(int i = 1; i <= n; i++){
        scanf("%d",&A[i]);
    }
    sum,res = 0;
    generateP(0,0);
    //printf("%d\n",res);
}