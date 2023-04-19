#include <bits/stdc++.h>
using namespace std;
int solution(int position_1, int position_2, int jump){
    //calc the steps between two positions
    int steps = (position_2 - position_1) /jump;

    //calc if the we can arrive to the position_2
    //or we should take another step
    if(position_1 + (steps * jump) < position_2)
        return steps+1;
    return steps;
}
int main() {
    cout<<solution(10 , 85 , 30);
}