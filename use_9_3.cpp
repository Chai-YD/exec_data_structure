////////////////////////////////////
//贝壳笔试
////////////////////////////////////
nclude<iostream>
#include<vecctor>
#include<algorithm>
using namespace std;

typedef strruct Node{
    int index;
    int f;
    int s;
}Node;
bool cmp(Node A,Node B){
    return A.f < B.f;
}
vector<int> Find(vector<Node> v){
    int n = v.size()-1;
    vector<int> ans(v.size());
    sort(v.begin(),v.end(),cmp);
    ans[v[n].index] = 1;
    for(int i = v.size()-2;i >= 0;--i){
        ans[v[i].index] = 1;
        int max = v[i].f + v[i].s;
        int j = i + 1;
        while(j <=n && max >v[j].f){
            if(max > v[j].f +v[j].s){
                ++ans[v[i].index];
                ++j;
            }else{
                ans[v[i].index+=ans[v[j].index]];
                break;
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<Node> v(n);
    for(int i = 0;i < n;++i){
        int w,h;
        cin>>w>>h;
        v[i].index = i;
        v[i].f =w;
        v[i].s = h;
    }
    vector<int> ans(Find(v));
    for(int i = 0;i < n;++i){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
