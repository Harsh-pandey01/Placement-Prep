  // Bubble sort is a sorting Algorithm which is easiest to impelemented

  #include<bits/stdc++.h>
  using namespace std ;

  void bubble(vector<int>&nums){

    for(int i = 0 ; i < nums.size() ; i++){
        for(int j = 0 ; j < nums.size()-i ; j++){
            if(nums[j]>nums[j++]){
                swap(nums[j],nums[j++]);
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

bubble(nums);

cout << "The sorted Array is "<<endl ;
for(auto i : nums){
    cout << i << " ";
}
cout << endl ;

    return 0;
  }




















