//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int main(){
//    int val;
//    vector<int> vec;
//    while(cin>>val && val != '\n'){
//        vec.push_back(val);
//    }
//    sort(vec.begin(),vec.end()-1);
//    int s = vec.size();
//    int num = vec[s-1];
//    for(int i = 0;i < num;++i){
//        if(i < num-1){
//            cout<<vec[i]<<" ";
//        }else{
//            cout<<vec[i]<<endl;
//        }
//    }
//    return 0;
//}

////逆置一句话中的单词
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main(){
//    string str;
//    getline(cin,str);
//    int s = str.size();
//    int pos = 0;
//    reverse(str.begin(),str.begin()+s);
//    for(int i = 0; i< s;++i){
//        if(str[i] == ' '){
//            reverse(str.begin()+pos,str.begin()+i);
//            pos = i+ 1;
//        }
//    }
//    reverse(str.begin()+pos,str.end());
//    cout<<str<<endl;
//    return 0;
//}

////现在有一棵合法的二叉树，树的节点都是用数字表示，
////现在给定这棵树上所有的父子关系，求这棵树的高度
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int depthTree(vector<vector<int> >&tree,int node){
//    int s = tree[node].size();
//    if(s == 0){
//        return 1;
//    }
//    if(s == 1){
//        return depthTree(tree,tree[node][0])+1;
//    }
//    else{
//        int left = depthTree(tree,tree[node][0]);
//        int right = depthTree(tree,tree[node][1]);
//        return (left>right?left+1:right+1);
//    }
//}
//
//int main(){
//    int count;
//    cin>>count;
//    vector<vector<int> > tree(count);
//    for(int i = 0;i < count-1;++i){
//        int p,c;
//        cin>>p>>c;
//        tree[p].push_back(c);
//    }
//    cout<<depthTree(tree,0)<<endl;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//    int count = 2;
//    vector<string> vec;
//    while(count--){
//        string str;
//        cin>>str;
//        vec.push_back(str);
//    }
//    cout<<vec[0]<<vec[1]<<endl;
//    if((vec[0]+vec[1]) < (vec[1]+vec[0]))
//        swap(vec[0],vec[1]);
//    cout<<vec[0]<<vec[1]<<endl;
//    return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main(){
//    int i = 0;
//    if(i>= 0)
//        if(i != 0)
//            cout<<i<<endl;
//        else
//            cout<<"haha"<<endl;
//    return 0;
//}


////输出所有在m和n范围内的水仙花数
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main(){
//    int n,m;
//    cin>>m>>n;
//    if(m > n){
//        cout<<"no"<<endl;
//        return 0;
//    }
//    int flag = 0;
//    for(int i = m; i < n;++i){
//        int sum = 0;
//        int num =i;
//        while(num){
//            int val = num%10;
//            sum += val*val*val;
//            num /=10;
//        }
//        if(sum == i){
//            flag = 1;
//            cout<<i<<" ";
//        }
//    }
//    if(flag == 0){
//        cout<<"no"<<endl;
//    }
//    return 0;
//}

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    int count;
    cin>>str>>count;
    while(count--){
        int s =str.size();
        int min = 0;
        for(int i = 0;i < s;++i){
            if(str[i] < str[min])
                min = i;
        }
        str.erase(min,1);
    }
    cout<<str<<endl;
    return 0;
}


