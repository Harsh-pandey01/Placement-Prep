// union of the two Arrays
#include<bits/stdc++.h>
using namespace std ;

void unionOfArrays(int arr1[],int arr2[],int size1,int size2){
    int *temp = new int(size1+size2);
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;

    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            temp[k++] = arr1[i];
            i++ ;
        }else{
            temp[k++] = arr2[j];
            j++ ;
        }
    }
    while(i < size1){
        temp[k++]=arr1[i++];
    }
    while(j < size2){
        temp[k++] = arr2[j++];
    }

    for(int i = 0 ; i < size1+size2 ; i++){
        cout<<temp[i]<<" " ;
    }

    delete []temp ;
}

int main(){

int arr1[5]={2,4,5,7,8};
int arr2[7]={2,5,7,8,9,10,11};

unionOfArrays(arr1,arr2,5,7);

    return 0 ;
}