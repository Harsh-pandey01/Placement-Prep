// It is a Seaching Algorithm in which the smallest element will
//  be placed at thier correct position

#include<bits/stdc++.h>
using namespace std ;

void selectionSort(vector<int>&nums){

for(int i = 0 ; i < nums.size() ; i++){
    for(int j = i+1 ; j < nums.size() ; j++){
        if(nums[j] < nums[i]){
            swap(nums[j],nums[i]);
        }
    }
}

}

int main(){

vector<int>nums = {4,5,7,9,5,6,8,2,1,3,5,7,8};
cout << "The Array is "<<endl ;
for(auto i : nums){
    cout << i << " ";
}
cout << endl ;

selectionSort(nums) ;

cout << "The sorted Array is "<<endl ;
for(auto i : nums){
    cout << i << " ";
}
cout << endl ;

    return 0 ;
}