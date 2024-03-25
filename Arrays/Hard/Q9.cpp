// Repeative and Duplicate Number present int the Array

#include<bits/stdc++.h>
using namespace std ;

int duplicates(vector<int>nums){
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] < 0){
            return i+1 ;
        }else{
            nums[nums[i]-1] = -1 * nums[nums[i]-1];
        }
    }
    return -1 ;
}

int missings(vector<int>nums , int duplicate){
    int ans = 0 ;
    for(auto i : nums){
        ans = ans^i ;
    }
    for(int i = 1 ; i <= nums.size() ; i++){
        ans = ans^i ;
    }
    return ans^duplicate ;
}

int main(){

vector<int>nums = {3,1,2,5,2} ; 

int duplicate = duplicates(nums) ;

int missing = missings(nums,duplicate);

cout << "DUplicate "<<duplicate << "missing" << missing <<endl ;

    return 0 ;
}