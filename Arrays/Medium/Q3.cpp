// Majority Element
// Approach 1 :- Count and store the cnt of each element and get the answer
// Approach 2 :- Since n/2 hai to it will definately present at the middle so sort and middle element will be the answer
// Approach 3 :-We will use Moreys voting Algoritm

#include<bits/stdc++.h>
using namespace std ;

int votingAlgo(vector<int>nums){
    int ans = -1 ;
    int elem = nums[0] ;
    int cnt = 0 ;
    for(int i = 0 ; i < nums.size() ; i++){
        if(cnt == 0){
            elem = nums[i];
            cnt++ ;
        }else{
            if(nums[i] == elem){
                cnt++ ;
            }else{
                cnt-- ;
            }
        }
    }
    return elem ;
}


int main(){

vector<int>nums = {1,1,1,2,2} ;

cout<<votingAlgo(nums)<<endl ;

    return 0;
}