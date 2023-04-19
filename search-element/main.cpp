#include <iostream>
using namespace std;

void found(int arr[] , int size , int miss){
    for(int i=0 ;i<size ; i++)
        if(arr[i] == miss)
            cout<<i;
    
}

int main(){
    int N , K;
    cout<<"Enter the size of the array: ";
    cin>>N;
    int A[N] ;

    cout<<"Enter the element of the array: ";
    for(int i=0; i<N ; i++)
        cin>>A[i];
    
    cout<<"Enter the missing number: ";
    cin>>K;
    found(A , N , K);
}