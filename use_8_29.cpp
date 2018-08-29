#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int val;
    vector<int> vec;
    while(cin>>val && val != '\n'){
        vec.push_back(val);
    }
    sort(vec.begin(),vec.end()-1);
    int s = vec.size();
    int num = vec[s-1];
    for(int i = 0;i < num;++i){
        if(i < num-1){
            cout<<vec[i]<<" ";
        }else{
            cout<<vec[i]<<endl;
        }
    }
    return 0;
}
