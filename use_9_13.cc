// #include<cstdlib>
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// 
// //函数的实现
// bool validate(string address){
//     //计算字符串中点的个数、个数据段是否满足要求
//     int s = address.size();
//     int sum_val = 0;
//     int cou = 0;//计算点的个数
//     for(int i = 0;i < s ;++i){
//         if(address[i] == '.'){
// 
//             cou = cou+1;
//             if(sum_val >=0 && sum_val <=255){
//                 ;
//             }else{
//                 return false;
//             }
//         }else{
//             sum_val = sum_val*10 + address[i] - '0';
//         }
//     }
//     if(cou != 3){
//         return false;
//     }
//     return true;
// }
// 
// int main(){
//     string str = "1.2.3.4";
//     bool ret = validate(str);
//     cout<<ret<<endl;
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;
bool fa, fb;
 
void dfs(int a, int b, int k)
{
    //气球的三种状态，只要b＝1存在，那么b就没有说谎
    //没必要判断a=1的情况，只有fb为真，fa为假，b赢
    if(b == 1)
    {
        fb = true;
        if(a == 1)
            fa = true;
    }
    if( k == 1 || (fa&&fb) )
        return;
    if(a % k == 0)
        dfs(a/k,b,k-1);
    if(b % k == 0)
        dfs(a,b/k,k-1);
    dfs(a,b,k-1);
}
int main()
{
    int a, b;
    while(cin >> a >> b && (a != 0 && b != 0))
    {
        if(a < b)
            swap(a, b);
        fa = fb = 0;
 
        dfs(a, b, 100);
 
        //只有fa为假，fb为真，b赢
        if(!fa && fb)
            cout << b << endl;
        else
            cout << a << endl;
    }
    return 0;
}














