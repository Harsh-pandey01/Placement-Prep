// Sort 0s , 1s and 2s

#include<bits/stdc++.h>
using namespace std ;

// Best and Optimised approach is by using the dutch flag algorithm

void sortZeros(vector<int>&nums){

    int low , mid = 0 ;
    int high = nums.size()-1 ;

    while(mid < high){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++ ;
            mid++ ;
        }else if(nums[mid] == 1){
            mid++ ;
        }else{
            swap(nums[mid],nums[high]);
                high-- ;
            }
        }
    }



int main(){

vector<int>nums = {1,1,0,0,0,2,1,0,2} ;

sortZeros(nums);

for(auto i : nums){
    cout<<i << " ";
}
    return 0 ;
}