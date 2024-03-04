// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include<iostream>
using namespace std ;

int main(){

int arr[10] = {1,0,0,2,2,1,0,1,1,2};
// Can be solved optimisely by using DUTCH FLAG ALGORITHM

int low = 0 , mid = 0 ,high = 10;

while(mid < high){
    if(arr[mid] == 0){
        swap(arr[low],arr[mid]);
        mid++ ;
        low++;
    }else if(arr[mid] == 1){
        mid++;
    }else{
         high--;
        swap(arr[mid],arr[high]);
       
    }
}

cout<<"The array after sorting is "<<endl ;

for(int i = 0 ;i < 10 ;i++){
    cout<<arr[i] <<" ";
}

    return 0 ;
}
