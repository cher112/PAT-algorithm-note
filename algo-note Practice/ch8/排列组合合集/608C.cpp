#include <iostream>
#define MAX 20
using namespace std;
/*在长度为n顺序整型数据中选取长度为r的组合序列
* k1为当前已记录序列长度,k2为剩余待选取元素的起始位置 */
int rec[MAX];//记录组合序列
void combination_recursive(int arr[],int n,int r,int k1,int k2)
{
    if (k1 == r)//输出当前序列
    {
        for (int i = 0; i < r; ++i)
            cout << rec[i] << " ";
        cout << endl;
    }
    else
        for (int i = k2; i < n; ++i)
        {
            rec[k1] = arr[i]; //子序列赋值
            combination_recursive(arr,n,r,k1+1,i+1);//递归回溯
        }
}
void combination(int arr[],int n)//输出n个元素的全部组合 
{
	for(int i=0;i<=n;++i)
		combination_recursive(arr,4,i,0,0);
}
int main()
{
	int a[]={4,5,7,9};
    combination(a,4);
    return 0;
}