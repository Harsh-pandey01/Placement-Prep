//  3 Sum Problem

#include<bits/stdc++.h>
using namespace std ;

void threeSum(vector<int>nums , int target = 0){
vector<vector<int>>ans ;
map<vector<int> , bool > present;

for(int i = 0 ; i < nums.size()- 2 ; i++){
    for(int j = 0 ; j < nums.size() -1 ; j++){
        for(int k = 0 ; k < nums.size() ; k++){
        if(nums[i]+nums[j]+nums[k] == target){
            vector<int>temp ={nums[i],nums[j],nums[k]};
            sort(temp.begin(),temp.end());
            if(!present[temp]){
                present[temp]=true;
                ans.push_back(temp);
            }
        }
        }
    }
}

for(int i = 0 ; i < ans.size() ; i++){
    for(int j = 0 ; j < ans[i].size() ; j++){
        cout << ans[i][j] << " ";
    }
    cout <<endl ;
}

}

void optimsedThreeSum(vector<int>nums,int target){
    sort(nums.begin(),nums.end()) ;
    vector<vector<int>>ans ;
    map<vector<int> , bool > present;

    for(int i = 0 ; i < nums.size() ; i++){
        int rem = target - nums[ i] ;
        int j = i + 1 ;
        int k = nums.size()-1 ;
        while(j < k){
            if(nums[j]+nums[k] == rem){
                vector<int>temp = {nums[i],nums[j],nums[k]} ;
                sort(temp.begin() , temp.end()) ;
                if(present[temp] == false){
                    ans.push_back(temp) ;
                    present[temp] = true ;
                }
                j++ ;
            }else if(nums[j]+nums[k] > rem){
                k--;
            }else{
                j++ ;
            }
        }
    }
    for(int i = 0 ; i < ans.size() ; i++){
    for(int j = 0 ; j < ans[i].size() ; j++){
        cout << ans[i][j] << " ";
    }
    cout <<endl ;
}

}



int main(){

vector<int>nums = {1,2,4,5,6,7,8,9,5,3};
int target ;
cout<<"Enter the value of target" << endl ;
cin >> target ;

// Approach 1 :- Using Three for Loops and a Map will provide us the Answer
threeSum(nums , target) ;

cout<< endl ;
// Optimised Approach
optimsedThreeSum(nums , target);
    return 0 ;
}