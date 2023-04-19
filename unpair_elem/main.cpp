#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> &vec){
    sort(vec.begin(),vec.end());
    //check every two numbers
    //if they equal each other or not
    //3,3,7,9,9,9.9
    for(int i=0 ;i<vec.size() ;i+=2){
        if(vec[i] != vec[i+1])
            return vec[i];
    }
    return 0;
}
int main() {
    vector<int>vec = {9 , 3 , 9 , 3 , 9 , 7 , 9};
    int un_pair = solution(vec);
    cout<<un_pair;     
    
}