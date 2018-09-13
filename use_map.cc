#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<int,int> ma;
    ma[1] = 2;
    map<int,int>::iterator it = ma.find(1);
    if(it != ma.end()){
        ma[1] += 1;
        cout<<it->second<<endl;
    }else{
        cout<<2<<endl;
    }
}
