//Largest Sum Contiguous SubArray (Kadane’s Algorithm)
#include <iostream>
#include <iostream>
using namespace std;
int maxSubArraySum(int arr[], int size){
    //(INT_MIN) to make sure that the variable
    //is contain the smallest int num ever
    int max_so_far = INT_MIN , max_ending_here = 0;
    int start = 0 , end = 0 , s = 0;

    for(int i=0 ;i<size ;i++){
        max_ending_here = max_ending_here + arr[i];
        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }

        if(max_ending_here < 0){
            max_ending_here = 0;
            s = i+1;
        }
    }
    cout<<"Start Index: "<<start<<endl;
    cout<<"End Index: "<<end<<endl;
    return max_so_far ;
}

int main(){
    int arr[]={-2 , -3 , 4 , -1 , -2 , 1 , 5 ,-3};
    int size = sizeof arr / sizeof arr[0];
    int max_sum = maxSubArraySum(arr, size);
    cout<<"Max: "<<max_sum;
}