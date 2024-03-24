// ReArrange in alternate positive negative elements

#include<bits/stdc++.h>
using namespace std ;

void arrange(vector<int>nums){
vector<int>temp(nums.size()) ;
int pos = 0 ;
int neg = 1 ;
for(auto i : nums){
    if(i > 0){
        temp[pos] =  i; 
        pos+=2 ;
    }else{
        temp[neg] = i ;
        neg+=2 ;
    }
}
cout<<"After :"<<endl ;
for(auto i : temp){
    cout << i << " ";
}


}

int main(){
 
vector<int>nums={2,2,4,5,-1,-4,-5,-3};
cout<<"Before:"<<endl ;
for(auto i : nums){
    cout << i << " ";
}
cout<<endl ;
arrange(nums) ;

    return 0 ;
}