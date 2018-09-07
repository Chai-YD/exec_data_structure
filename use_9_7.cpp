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



