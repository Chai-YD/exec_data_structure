#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> vec;
int main(){
    string str;
    cin>>str;
    int beg1 = 0;
    int end1 = 0;
    int cou = 0;
    int s = str.size();
    for(int i = 0; i < s;++i){
        int val = str[i]-'0';
        vec.push_back(val);
    }
    for(int i = 0;i <s;++i){
        if(i < 3){
            beg1 += vec[i];
        }else{
            end1 += vec[i];
        }
    }
    while(beg1 != end1){
        if(beg1 < end1){
            int mun = end1 - beg1;
            int min = vec[0];
            int index_beg = 0;
            int index_end = 3;
            int i;
            for(i = 1;i < 3;++i){
                if(min > vec[i]){
                    min = vec[i];
                    index_beg = i;
                }
            }
            //找最大
            int max = vec[3];
            int j = 3;
            for(j = 4;j < 6;j++){
                if(max < vec[j]){
                    max = vec[j];
                    index_end = j;
                }
            }
            if((9-min) >= mun || max >= mun){
                if((9 -min) >= mun ){
                    beg1 = end1; 
                }else{
                    end1 = beg1;
                }
                cou += 1;
                break;
            }else{
                if( (9- min) > max){
                    mun -= (9- min);
                    vec[index_beg] = 9;
                    beg1 += (9 - min);
                    cou += 1;
                }else{
                    vec[index_end] = 0;
                    mun -= max;
                    end1 -= max;
                    cou += 1;
                }
            }
        }else{
            
            int mun = beg1 - end1;
            int min = vec[3];
            int index_beg = 0;
            int index_end = 3;
            int i;
            for(i = 4;i < 6;++i){
                if(min > vec[i]){
                    min = vec[i];
                    index_end = i;
                }
            }
            //找最大
            int max = vec[0];
            int j ;
            for(j = 1;j < 3;j++){
                if(max < vec[j]){
                    max = vec[j];
                    index_beg = j;
                }
            }
            if((9-min) >= mun || max >= mun){
                if((9 -min) >= mun ){
                    end1 == beg1; 
                }else{
                    beg1 = end1;
                }
                cou += 1;
                break;
            }else{
                if((9- min) > max){
                    mun -= (9 - min);
                    vec[index_end] = 9;
                    end1 += (9-min);
                    cou += 1;
                }else{
                    vec[index_beg] = 0;
                    mun -= max;
                    beg1 -= max;
                    cou += 1;
                }
            }
        }
    }
    cout<<cou<<endl;
    return 0;
}
