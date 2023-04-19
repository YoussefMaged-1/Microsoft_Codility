#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &vec, int round) {
    //constructor to the old vector
    vector <int> new_vec(vec.size());
    for( int i=0 ; i<vec.size();i++)
    // % part to make sure that the number is not larger 
    //than the size of the array
        new_vec[(i+round) % vec.size()] = vec[i];
    return new_vec;
    //the index move from index to index + round 
}

int main() {
    vector<int> vec = {1,2,3,4};
    int round = 1;
    vec = solution(vec , round);
    for( int i=0 ; i<vec.size();i++) 
       cout<<vec[i]<<" ";
}