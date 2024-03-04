// Move all the negative elements to one side of the array

#include<iostream>
using namespace std ;

int main(){

int arr[10]={-1,2,-5,-5,3,6,-2,-4,10,12};

// Optised approach
int pos= 0 ;
int neg = 1 ;
int ans[10];
for(int i = 0 ; i < 10 ; i++){
    if(arr[i] > 0){
        ans[pos] = arr[i];
        pos+=2;
    }
    else{
        ans[neg] = arr[i];
        neg+=2;
    }
}


for(int i = 0 ; i < 10 ; i++){
    cout<<ans[i]<<" ";
}


    return 0;
}