// We are given an array and we have to rotate the array

#include<bits/stdc++.h>
using namespace std ;

void reverseArray(int *arr,int s, int e){
    if(s==e){
        return ;
    }
    swap(arr[s],arr[e]);
    reverseArray(arr,++s,--e);
}

int main(){

int size = 5 ;
int *arr = new int[5];

cout<<"Enter the elements in the array"<<endl ;
for(int i = 0 ; i < 5 ; i++){
    cin >> arr[i];
}

reverseArray(arr,0,4);

cout<<"Reversed array is"<<endl ;
for(int i = 0 ; i < 5 ; i++){
    cout<<arr[i]<<" ";
}


    return 0;
}