#include <bits/stdc++.h>
#include <climits>
using namespace std;

int solution(vector<int> &vec) {
    //check if the vec has only 1 number
    if(vec.size() < 2)
        return 0;
    // calc the sum of numbers
    int sum_vec = accumulate(vec.begin() , vec.end() , 0);
    // make the left variable
    // make minimum different equal max number
    int left = 0 , min_diff = INT_MAX;

    //before the last element because
    //it included as a right sum
    for(int i=0 ;i<vec.size()-1 ; i++){
        left += vec[i];
        //instead of doing nested loop we using this algo
        //right = sum_vec - left
        //|left - right| = |left - sum_vec + left| 
        // = |2left - sum_vec| 
        int diff = abs((2*left) - sum_vec);
        if(min_diff > diff)
            min_diff = diff;
    }

    return min_diff;

}

int main() {
    vector<int> x = {3,1,2,4,3};
    int min = solution(x);
    cout<<min;


}