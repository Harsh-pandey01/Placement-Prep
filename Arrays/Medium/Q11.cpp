// Rotate the given matrix by 90 degree
// Approach : -Transpose the given matrix and then swap accordingly

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

cout<<"Matrix Before"<<endl ;

for(int i = 0 ; i < size ; i++){
    for(int j = 0 ; j < size ; j++){
        cout<<nums[i][j] << " ";
    }
    cout<<endl ;
}

cout<<"Trasnspose Matrix"<<endl ;

// Transpose of the given matrix

for(int i = 0 ; i < size ; i++){
    for(int j = i ; j < size ; j++){
        swap(nums[i][j],nums[j][i]);
    }
}


for(int i = 0 ; i < size ; i++){
    for(int j = 0 ; j < size ; j++){
        cout<<nums[i][j] << " ";
    }
    cout<<endl ;
}

cout << "Rotated Matrix"<<endl;

for(int i = 0 ; i < size ; i++){
    for(int j = 0 ; j < size/2 ; j++){
        swap(nums[i][j] , nums[i][size-j-1]);
    }
}

for(int i = 0 ; i < size ; i++){
    for(int j = 0 ; j < size ; j++){
        cout<<nums[i][j] << " ";
    }
    cout<<endl ;
}

    return 0 ;
}
