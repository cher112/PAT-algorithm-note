#include <iostream>

using namespace std;

int Partition(int A[],int left,int right){
    //two pointers to quicksort
    int temp = A[left];//let head store in temp
    while(left<right){
        while(left<right&&A[right]>temp){
            //noticed that the condition "left<right" can't be ignored！
            right--;
        }
        A[left]=A[right];
        while(left<right&&A[left]<temp)
        {
            left++;
        }
        A[right]=A[left];
    }
    A[right]=temp;
    return right;
}

void quickSort(int A[],int left,int right){
    if(left<right){
        int pos = Partition(A,left,right);
        quickSort(A,left,pos-1);//noticed that original args do not change. It means  line 27's left and line28's right never change 
        quickSort(A,pos+1,right);
    }
}
int main(){
    int a[] = {3,1,4,7,2,10};
    quickSort(a,0,5);
    for (auto i:a){cout<<i<<" ";}
    return 0;
}