// Maximum consecutive ones 

#include<bits/stdc++.h>
using namespace std ;

int maxOne(int arr[],int size){
    int ans = 0 ;
    int currCnt = 0 ;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == 1){
            currCnt++ ;
            ans = max(ans,currCnt);
        }else{
            currCnt = 0 ;
        }
    }
    return ans ;
}

int main(){
    
    int arr[10]={1,1,0,4,5,1,1,1,4,7};

    cout << maxOne(arr,10)<<endl ;


    return 0 ;
}