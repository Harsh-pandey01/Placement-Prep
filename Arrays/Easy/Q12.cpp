// SubArrays having largest and sum equal to K
#include<bits/stdc++.h>
using namespace std ;

// Approach1:-Using two for loop to find the all the subarrays and search for the required ans
// Approach2 :- Using map store the sum and the element til the sum

int largestSubArray(vector<int>nums , int k){
    map<int,int>sums ;
    int sum = 0 ;
    int ans = 0 ;
    for(int i = 0 ; i < nums.size() ; i++){
     sum+=nums[i];
     if(sum == k){
        ans = max(ans,i+1);
     }
     int rem = sum - k ;
     if(sums.find(rem)!=sums.end()){
       int index = sums[rem];
       ans = max(ans,i-index) ;
     }

     if(sums.find(sum) == sums.end()){
        sums[sum] = i ;
     }

    }
    return ans ;
}

// Optimised Approach for the non negative integers
int lSubArray(vector<int>nums , int k){
    int i = 0 ;
    int sum = nums[0];
    int j = 0 ;
    int ans=0;
    while(j < nums.size()){
        if(sum > k){
            while(i <=j and sum > k){ 
                sum-=nums[i];
                i++ ;
            }
        }
        if(sum == k){
            ans=max(ans,j-i+1);
        }

        j++;
        if(j < nums.size()){
            sum+=nums[i];
        }
    }
    return ans ;
}


int main(){

vector<int>nums= {1, 2, 3, 1, 1, 1, 1};

cout << "Enter the value of sum"<<endl ;
int k ;
cin >> k ;

cout<<lSubArray(nums,k);

    return 0 ;
}