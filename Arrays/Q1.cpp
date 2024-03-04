// Reverse an Array/String

#include<iostream>
using namespace std ;

int main(){

int size ;
cout<<"Enter the size"<<endl ;
cin >> size ;

int arr[size] = {0};
cout<<"Enter the elements of the array"<<endl ;
for(int i = 0; i < size ; i++){
    cin >> arr[i];
}

int start = 0 ;
int end = size-1 ;

// Logic for the Reversing the array
while(start < end){
    swap(arr[start],arr[end]);
    start++ ;
    end-- ;
}

for(int i = 0; i < size ; i++){
    cout<<arr[i]<<" ";
}


    return 0 ;
}