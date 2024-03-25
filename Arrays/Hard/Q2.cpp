// Majority Element of the Array (n/3 times)
// This can also be solved using the hashmap
// We can store the cnt of the elements and form there we can get the majority elements

#include<bits/stdc++.h>
using namespace std ;

// void major(vector<int>nums){
//     map<int,int>cnt ;
//     int size = nums.size();
//     vector<int>ans; 
//     for(auto i : nums){
//         cnt[i]++ ;
//         if(cnt[i] > size /3){
//             ans.push_back(i);
//             cout<< i <<endl ;
//             cnt[i] = INT_MIN ;
//         }
            
        
//     }

//     for(auto i :ans){
//         cout << i <<" " ;
//     }

// }

// Approach 2 :- Using Mores voting Algorthm 
void moreys(vector<int>nums){
    int elem1 = INT_MIN ;
    int elem2 = INT_MIN ;
    int cnt1 , cnt2 = 0 ;
    vector<int>ans ;
    for(int i = 0 ; i < nums.size() ; i++){
       if(nums[i]!=elem2 && cnt1 == 0){
        cnt1 = 1 ;
        elem1 = nums[i];
       }else if(nums[i]!=elem1 && cnt2 == 0){
        cnt2 = 1 ;
        elem2 = nums[i];
       }else if(nums[i] == elem1){
        cnt1++ ;
       }else if(nums[i] == elem2){
        cnt2++ ;
       }else{
        cnt1-- ;
        cnt2-- ;
       }
    }

    if(cnt1!=0){
        ans.push_back(elem1);
    }
    if(cnt2!=0){
        ans.push_back(elem2);
    }
 
    for(auto i : ans){
        cout<< i << " ";
    }

}


int main(){

vector<int>nums = {1,2} ;

// Approach 1 :-Using the hashMap
// majors(nums);

// Approach 2 :- Using Moreys Algo
moreys(nums);

    return 0 ;
}