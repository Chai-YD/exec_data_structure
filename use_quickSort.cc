#include<iostream>
#include<algorithm>
using namespace std;

//快速排序函数的实现
void quickSort(int a[],int l,int r){
    if(l < r){
        int i = l,j = r,x = a[l];
        while(i < j){
            //从右往左找一个小于x的数
            while(i < j && a[j] >= x){
                j--;
            }
            //替换
            if(i < j){
                a[i++] = a[j];
            }
            //从左往右找一个大于等于x的书
            while(i < j && a[i] < x){
                i++;
            }
            if(i < j){
                a[j--] = a[i];
            }
        }
        a[i] = x;
        quickSort(a,l,i-1);
        quickSort(a,i+1,r);
    }
}

int main(){
    int arr[] = {1,3,5,2,4,6,8,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < len;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,len-1);
    //排序后
    for(int i = 0; i < len ;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
