# include<stdio.h>
int A[100000];
int temp[100000];
void merge(int A[],int L1,int R1,int L2,int R2){
    //merge sort [l1,R1] & [l2,r2]
    int index = 0;
    int i = L1,j = L2;
    while(i <= R1 && j <= R2){
        if(A[i] >= A[j]){
            temp[index++] = A[i++];
        }else if(A[i] < A[j]){
            temp[index++] = A[j++];
        }
    }
    while(i <= R1) temp[index++] = A[i++];
    while(j <= R2) temp[index++] = A[j++];

    for(i = 0; i < index; i++){
        A[L1+i] = temp[i];
    }
}

void mergeSort(int A[],int left,int right){
    if(left<right){
        int mid = left + (right - left)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid+1,right);
        merge(A,left,mid,mid+1,right);
    }

}

int main(){
    int n,m;
    while(scanf("%d",&n)!=EOF){
        scanf("%d",&m);
        for(int i = 0; i<m; i++){
            scanf("%d",&A[i]);
        }

    //merge(A,0,5,6,9);
    mergeSort(A,0,m-1);
    for(int i=0;i<m;i++) printf("%d\n",A[m-1-i]);
    }
}