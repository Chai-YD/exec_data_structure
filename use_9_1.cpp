//STL中算法replace 的使用
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str = "aaa nihao";
    replace(str.begin(),str.end(),'a','c');
    cout<<str<<endl;
    return 0;
}
