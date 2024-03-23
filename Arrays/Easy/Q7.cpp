// Move Zeros to the End

#include<bits/stdc++.h>
using namespace std ;

void moveZeros(int arr[],int size){
    int i = 0 ;
    while(arr[i]!=0){
        i++ ;
    }
    for(int j = i ; j < size ; j++){
        if(arr[j]==1){
            swap(arr[j],arr[i]);
            i++ ;
        }
    }
}

void printArray(int arr[],int size){
  for(int i = 0 ; i < size ; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){

int arr[7]={1,1,0,0,0,1,1};
cout<<"Before Moving Zeros"<<endl ;
printArray(arr,7);
moveZeros(arr,7);
cout<<"After Moving Zeros"<<endl ;
printArray(arr,7);
    return 0;
}