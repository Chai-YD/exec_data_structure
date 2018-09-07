//////////////////////////////////////
//算法练习
//////////////////////////////////////

//常用算法
//1.排序sort
//

//#include<iostream>
//#include<vector>  //程序中使用了vector
//#include<algorithm>
//using namespace std;
//
//int main(){
//    //vector容器的使用
//    vector<int> vec;
//    vec.push_back(4);
//    vec.push_back(2);
//    vec.push_back(3);
//    vec.push_back(6);
//    vec.push_back(5);
//    vec.push_back(7);
//    //迭代器的使用
//    vector<int>::iterator it;
//    //将vector中的元素进行遍历
//    for(it = vec.begin();it!=vec.end();++it)
//        cout<<*it<<" ";
//    cout<<endl;
//    // 将vector中的元素进行排序
//    sort(vec.begin(),vec.end());
//    //打印vector中的元素
//    for(it = vec.begin();it != vec.end();++it)
//        cout<<*it<<" ";
//    cout<<endl;
//    return 0;
//}


//排序算法
//2.堆排序
//使用
//    make_heap(vec.begin(),vec.end());
//    sort_heap(vec.begin(),vec.end());
//

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main(){
//    vector<int> vec;
//    vec.push_back(2);
//    vec.push_back(3);
//    vec.push_back(5);
//    vec.push_back(7);
//    vec.push_back(8);
//    vec.push_back(6);
//    vector<int>::iterator it;
//    for(it = vec.begin();it != vec.end();++it){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//    make_heap(vec.begin(),vec.end());
//    sort_heap(vec.begin(),vec.end());
//    for(it = vec.begin();it != vec.end();++it)
//    {
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//    return 0;
//}

//排序算法
//1.创建堆make_heap
//2.元素入堆push_heap(默认插入最后一个元素)
//3.元素出堆pop_heap(与push_heap一样，pop_heap必须对堆操作有意义)
//

//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int main(){
//    vector<int> vec;
//    vec.push_back(2);
//    vec.push_back(5);
//    vec.push_back(3);
//    vec.push_back(7);
//    vec.push_back(4);
//    vec.push_back(9);
//    make_heap(vec.begin(),vec.end());
//    vec.push_back(20);
//    push_heap(vec.begin(),vec.end());
//    vector<int>::iterator it;
//    for(it = vec.begin();it != vec.end();++it){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//    pop_heap(vec.begin(),vec.end());
//    for(it = vec.begin();it != vec.end();it++)
//        cout<<*it<<" ";
//    cout<<endl;
//    return 0;
//}

//9_7下午
//剔除连续重复元素unique
//函数原型：unique(v.begin(),v,end());

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main(){
//    vector<int> vec;
//    vec.push_back(2);
//    vec.push_back(2);
//    vec.push_back(3);
//    vec.push_back(2);
//    vec.push_back(4);
//    vec.push_back(3);
//    vec.push_back(3);
//    vector<int>::iterator it,result;
//    sort(vec.begin(),vec.end());
//    result = unique(vec.begin(),vec.end());
//    cout<<*result<<endl;
//    for(it = vec.begin();it != result;it++)
//        cout<<*it<<" ";
//    cout<<endl;
//    return 0;
//}

//条件移除remove_if
//返回值相当于移除满足元素后形成的新向量的end()值
//函数原型：remove_if(v.begin(),v.end(),even);
//////////////////////////////////////
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool even(int x){
//    return x%2?0:1;
//}
//
//int main(){
//    vector<int> vec;
//    for(int i = 1;i <= 10;i++)
//        vec.push_back(i);
//    vector<int>::iterator it,result;
//    cout<<"移除前：";
//    for(it = vec.begin();it != vec.end();++it)
//        cout<<*it<<" ";
//    cout<<endl;
//    result = remove_if(vec.begin(),vec.end(),even);
//    cout<<"移除后：";
//    for(it = vec.begin();it != result;++it)
//        cout<<*it<<" ";
//    cout<<endl;
//    return 0;
//}

//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    vector<int> v1;
//    v1.push_back(-5);
//    v1.push_back(1);
//    v1.push_back(2);
//    v1.push_back(-6);
//    v1.push_back(-8);
//    v1.push_back(1);
//    v1.push_back(2);
//    v1.push_back(-11);
//    vector<int> v2;
//    v2.push_back(1);
//    v2.push_back(2);
//    vector<int>::iterator it;
//    it = find_end(v1.begin(),v1.end(),v2.begin(),v2.end());
//    if(it != v1.end())
//        cout<<"找到了"<<endl;
//        cout<<*it<<endl;
//    return 0;
//}

//重复元素子序列搜索search_n
//子序列
//////////////////////////////////////

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main(){
//    vector<int> vec;
//    vec.push_back(3);
//    vec.push_back(3);
//    vec.push_back(4);
//    vec.push_back(3);
//    vec.push_back(3);
//    vec.push_back(3);
//    vec.push_back(2);
//    vec.push_back(6);
//    vector<int>::iterator it;
//    it = search_n(vec.begin(),vec.end(),3,3);
//    if(it!= vec.end()){
//        cout<<"找到了3个3"<<endl;
//        int n = it-vec.begin();
//        cout<<n<<endl;
//    }else
//        cout<<"未找到"<<endl;
//    return 0;
//}

//算法count_if
//

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(33);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(1);
    int ret = count(vec.begin(),vec.end(),2);
    cout<<ret<<endl;
    return 0;
}


