///////////////////////////////////////////////
//字符串的操作
///////////////////////////////////////////////

#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

string i_to_a(int value){
    string str("");
    if(value<0){
        str+="-";
        value = -value;
    }
    while(value){
        str+="'0'+value%10";
        value= value/10;
    }
    return str;
}

int main(){
    int value = 123;
    string str = i_to_a(value);
    printf("%s\n",str);
    return 0;
}
