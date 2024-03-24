// Spiral Printing of the matrix 

#include<bits/stdc++.h>
using namespace std;

int main(){

// Creating a Matrix
int nums[3][3];
int size = 3 ;

// Enter the element column wise
cout<<"Enter the element column wise" << endl ;
for(int i = 0 ; i < size ; i++){
    for(int j = 0 ; j < size ; j++){
        cin >> nums[i][j];
    }
}

cout<<"Matrix :--"<<endl ;

for(int i = 0 ; i < size ; i++){
    for(int j = 0 ; j < size ; j++){
        cout<<nums[i][j] << " ";
    }
    cout<<endl ;
}

int sRow = 0 ;
int eRow = size-1 ;
int sCol = 0 ;
int eCol = size - 1 ;
int cnt = 0 ;
int total = pow(size,2);

while(cnt < total){
    // print the rows 
    for(int i = sCol ; i <= eCol && cnt < total ; i++){
        cout << nums[sRow][i] << " ";
        cnt++ ;
    }
    sRow++ ;
    // print the last column
    for(int i = sRow ; i <=eRow && cnt < total ; i++){
        cout << nums[i][eCol]<<" ";
        cnt++ ;
    }
    eCol-- ;
    //  print the last row
    for(int i = eCol ; i >= sCol && cnt< total ; i--){
        cnt++ ;
        cout << nums[eRow][i]<<" ";
    }
    eRow-- ;
    // print the first column
    for(int i = eRow ; i  >=sRow && cnt < total ; i--){
        cnt++ ;
        cout<<nums[i][sCol]<<" ";
    }
    sCol++ ;
}


return 0;
}