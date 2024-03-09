// Find the sum of first N numbers

#include<bits/stdc++.h>
using namespace std ;

int FindSum(int n){
    if(n == 0){
        return 0;
    }

    return n + FindSum(n-1);
}

int main(){

int num ;
cout<<"Enter the number"<<endl ;
cin >> num ;

cout<<FindSum(num)<<endl ;


    return 0 ;
}