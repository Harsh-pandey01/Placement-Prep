// Bubble sort recursive solution

#include<iostream>
using namespace std ;

void bubble(int *arr , int size){
    
if(size == 1){
    return ;
}
bool swaped = false ;

for(int j = 0 ; j < size-1 ; j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swaped = true;
    }
}

if(!swaped){
    return ;
}

bubble(arr,size-1);

}

int main(){

int arr[10]={14,5,13,45,66,48,75,1,32,49};

bubble(arr,10);

cout<<"The sorted array is"<<endl ;
for(int i = 0 ; i < 10 ; i++){
    cout<<arr[i]<<" ";
}
    return 0 ;
}