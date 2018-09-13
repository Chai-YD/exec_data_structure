#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n ;
    cin>>n;
    map<int,int> ma;
    map<int,int>::iterator it;
    while(n--){
        int l,r;
        cin>>l>>r;
        for(int i = l;i < r;++i){
            it = ma.find(i);
            if(it != ma.end()){
                ma[i] +=1;

            }else{
                ma[i] = 1;

            }

        }//结束
    }
    vector<int> vec;
    int tmp;
    for(it = ma.begin();it != ma.end();++it){
        tmp = it->second;
        vec.push_back(tmp);
    }
     int s = vec.size();
     sort(vec.begin(),vec.end());
     cout<<vec[s-1]<<endl;
     return 0;
}
