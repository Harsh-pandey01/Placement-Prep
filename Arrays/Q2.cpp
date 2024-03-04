// Find the maximum and minimum element in an array

// Approach is very simple we can triverse the array and can find the element easily
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

int maxi = INT_MIN ;
int mini = INT_MAX ;



for(int i = 0; i < size ; i++){
    if(arr[i]<mini){
        mini = arr[i];
    }
    if(arr[i]>maxi){
         maxi = arr[i];
    }
}

cout<<"minimum and maximum are"<<mini<<" "<<maxi ;

    return 0 ;
}