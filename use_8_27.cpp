//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int main(){
//    string str;
//    getline(cin,str);
//    int s = str.size();
//    reverse(str.begin(),str.end());
//    int i = 0;
//    int j = 0;
//    for(;i < s;++i){
//        if(*(str.begin() + i) == ' '){
//            reverse(str.begin()+j,str.begin()+i);
//            j = i + 1;
//        }
//    }
//    reverse(str.begin()+j,str.end());
//    cout<<str<<endl;
//}
//
//从一个字符串中去除另一个字符串中出现的字符
//#include<iostream>
//using namespace std;
//
//int main(){
//    string str;
//    string tmp;
//    getline(cin,str);
//    getline(cin,tmp);
//    cout<<str<<endl;
//    cout<<tmp<<endl;
//    int s = str.size();
//    int i = 0;
//    while(i < str.size()){
//        if(tmp.find(str[i]) != -1){
//            str.erase(i,1);
//            continue;
//        }
//        ++i;
//    }
//    cout<<str<<endl;
//    cout<<tmp<<endl;
//    return 0;
//}

