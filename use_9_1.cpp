////STL中算法replace 的使用
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main(){
//    string str = "aaa nihao";
//    replace(str.begin(),str.end(),'a','c');
//    cout<<str<<endl;
//    return 0;
//}

//去除重复的元素
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void output(int val){
    cout<<val<<endl;
}

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(2);
    sort(vec.begin(),vec.end());
    unique(vec.begin(),vec.end());
    for_each(vec.begin(),vec.end(),output);
    return 0;
}




