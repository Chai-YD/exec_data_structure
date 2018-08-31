#include<iostream>
using namespace std;

long long MUL(int count ,int cur_count){
    long long sum = 1;
    long long cur_sum = 1;
    for(int i = 0;i < cur_count;++i){
        sum *= (count-i);
        cur_sum *= (i+1);
    }
    return (sum/cur_sum);
}

int main(){
    int length;
    cin>>length;
    int count_x,len_x,count_y,len_y;
    cin>>len_x>>count_x>>len_y>>count_y;
    long long count;
    for(int  i = 0; i < count_x;++i){
        for( int j = 0; j < count_y;++j){
            if((len_x*i + len_y*j)== length){
                count = (MUL(count_x,i)*MUL(count_y,j))%1000000007;
                cout<<count<<endl;
                return 0;
            }
        }
    }
    return 0;
}
