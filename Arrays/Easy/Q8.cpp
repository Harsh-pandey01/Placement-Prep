// Linear Search
#include<bits/stdc++.h>
using namespace std ;

int linearSearch(int *arr,int target,int size){
    for(int i = 0 ; i < size ;i++){
        if(arr[i] == target){
            return i ;
        }
    }
    return -1;
}

int main(){

int arr[7]={1,4,5,7,8,9,55};
cout<<linearSearch(arr,55,7)<<endl ;

    return 0 ;
}