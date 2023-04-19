#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int find_seq(int arr[] , int size){
    int count = 0 , ans = 0;
    //sorting the array
    sort(arr,arr+size);

    //insert repeated number once in the vector
    vector<int> vec;
    vec.push_back(arr[0]);
    for(int i=0; i<size; i++)
        if(arr[i] != arr[i-1])
            vec.push_back(arr[i]);
    
    for(int i=0; i<vec.size() ;i++){
        //check if the current element equal
        //the last element plus 1
        //and save the longest sequence
        if(vec[i] == vec[i-1] +1)
            count++;
        else
            count=1;
        ans = max(ans , count);
    }
    return ans;
}       

int main(){
    int ans;
    int arr[] = { 1, 2, 2, 3 , 5 , 7, 8 , 9 , 10 ,11 };
    int size = sizeof arr / sizeof arr[0];
    ans = find_seq(arr , size);
    cout<<"Result: "<<ans;
}