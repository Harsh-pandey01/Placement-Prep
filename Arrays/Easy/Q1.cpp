// LARGEST ELEMENT IN THE ARRAY

#include<bits/stdc++.h>
using namespace std ;

int main(){

int arr[] = {1,2,3,4,5,7,1,4,7,5,75,77,14};
// using for loop
int ans = INT_MIN ;
for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
if(arr[i] > ans){
    ans = arr[i];
}

}

cout<<"The answer is "<<ans <<endl ;


    return 0 ;
}