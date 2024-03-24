// next permutations

#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector<int>nums = {1,1,1,5};
    cout<<"Before"<<endl ;
    for(auto i : nums){
        cout<< i << " ";
    }
    cout<<endl ;
    // Using the STL
    // next_permutation(nums.begin(),nums.end());

    // Apporach 2 :-
    int index= -1 ;
    for(int i = nums.size()-2 ; i >=0 ;i--){
        if(nums[i] < nums[i+1]){
            index = i ;
            break ;
        }
    }
 
    if(index == -1 ){
     reverse(nums.begin(),nums.end());
    }else{
     
    //  search the first index greater than indx and swap it
    for(int i = nums.size()-1 ; i >index ; i--){
        if(nums[i] > nums[index]){
            swap(nums[i],nums[index]);
            break ;
        }
    }

    // reverse from the index to end
    reverse(nums.begin()+index+1 , nums.end());

    }

    cout<<"After :-"<<endl ;

    for(auto i : nums){
        cout<< i << " ";
    }

    return 0;
}
