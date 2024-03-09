// We are given a number and we have to find the fibonacci numbers 

#include<bits/stdc++.h>
using namespace std ;

int  fibo(int n){
    if(n == 1){
        return 0 ;
    }
    if(n == 2){
        return 1 ;
    }

    return fibo(n-1)+fibo(n-2);
}

int main(){

int num ;
cout<<"Enter the number"<<endl ;
cin >> num ;

cout<<"Fibonacci of number "<<num<<" is "<<fibo(num);
    return 0 ;
}