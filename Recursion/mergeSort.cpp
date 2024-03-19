//  Merge Sort 

#include<iostream>
using namespace std ;

void combineArray(int *arr , int s, int e ,int mid){
    int size1 = mid-s+1 ;
    int size2 = e-mid ;
    int temp1[size1];
    int temp2[size2];

int k = s ; 
for(int i = 0 ; i < size1 ; i++){
    temp1[i] = arr[k++];
}

for(int i = 0 ; i < size2 ; i++){
    temp2[i] = arr[k++];
}

k = s ;
int i = 0 ;
int j = 0 ;
while(i < size1 && j < size2){
    if(temp1[i]<temp2[j]){
        arr[k] = temp1[i];
        i++;
        k++;
    }else{
        arr[k] = temp2[j];
        j++;
        k++;
    }
}

while(i < size1){
    arr[k] = temp1[i];
    i++ ;
    k++ ;
}
while(j < size2){
    arr[k] = temp2[j];
    j++ ;
    k++ ;
}


}



void merge(int *arr , int s , int e){

if(s==e){
    return ;
}

int mid = (s+e)/2 ;

// sort the left array part
merge(arr,s,mid);

// sort the right array part
merge(arr,mid+1,e);

// merging the two arrays
combineArray(arr,s,e,mid);

}


int main(){

int arr[10]={140,5,113,5,660,48,75,14,327,4945};
merge(arr,0,9);

cout<<"The sorted array is"<<endl ;
for(int i = 0 ; i < 10 ; i++){
    cout<<arr[i]<<" ";
}

    return 0 ;
}