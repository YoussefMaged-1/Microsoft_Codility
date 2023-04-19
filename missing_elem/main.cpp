#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> &vec){
    if(vec.empty())
        return 1;
    sort(vec.begin() , vec.end());
    for(int i=0 ;i<vec.size();i++){
        // check if the current elem
        //is equal index + 1
        //Ex: elem: 1 -> index (0) + 1 = 1
        if(vec[i] != i+1 )
            return i+1;
    }
    return vec.size()+1;
}
int main() {
    vector<int> x = { 1 , 2 , 4 , 5};
    int missing;
    missing = solution(x);
    cout<<missing;
}