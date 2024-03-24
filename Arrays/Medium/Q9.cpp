// leader in an Array :- Element greater than all the element right to it
#include<bits/stdc++.h>
using namespace std ;

int main(){
 
 vector<int>nums = {1,4,5,7,5,2,1,2,4};

 vector<int>ans ;
 ans.push_back(nums[nums.size()-1]);
 int mini = nums[nums.size()-1] ;
 for(int i = nums.size()-2 ; i >=0 ;i--){
    if(nums[i] > mini){
        ans.push_back(nums[i]);
    }else{
        mini = nums[i];
    }
 }
 cout<<"Leaders :-"<<endl ;

    for(auto i : ans){
        cout<< i << " ";
    }


    return 0 ;
}
