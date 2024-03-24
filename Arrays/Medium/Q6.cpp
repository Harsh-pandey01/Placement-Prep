// stock buy and sell wala question to get maximum profil
#include<bits/stdc++.h>
using namespace std ;

int maxProfit(vector<int>nums){
int ans = 0 ;
int mini = nums[0] ;
for(int i = 0 ; i < nums.size() ; i++){
   ans = max(ans,nums[i]-mini);
   if(nums[i] < mini){
    mini = nums[i];
   }
}
return ans ;
}

int main(){

vector<int>stocks = {10,15,14,22,157,42};

cout<<"Maximum Profit will be " << maxProfit(stocks) ;


    return 0 ;
}