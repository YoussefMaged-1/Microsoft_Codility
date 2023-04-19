#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    int num = 1041;
    while(num>0){
        vec.push_back(num%2);
        num /= 2;
    }
    
    int count = 0 , max_num = 0;
    for(int i=vec.size()-1; i>=0 ;i--){
        if(vec[i] == 0)
            count++;
        else if(vec[i]==1){
            max_num = max(max_num , count);
            count = 0;
        }
    }
    cout<<"Gap: "<<max_num;
}