// Kadans Algorithm

#include<bits/stdc++.h>
using namespace std ;

int kadans(vector<int>nums){
    int sum = 0 ;
    int ans = 0 ;

    for(int i = 0 ; i < nums.size() ; i++){
        sum+=nums[i];
        ans = max(ans,sum);

        if(sum < 0){
            sum = 0 ;
        }
    }
    return ans ;
}


int main(){

vector<int>nums = {1,5,6,8,9,-9,-8,4,5,7,8,-11,-25};

cout<<"Maximum subArray sum is equal to "<<kadans(nums) << endl ;


    return 0 ;
}