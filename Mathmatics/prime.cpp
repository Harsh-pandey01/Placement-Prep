// is given number is prime number or not ?

#include<iostream>
using namespace std ;

bool checkPrime(int num){
    if(num == 1){
        return false ;
    }
    for(int i = 2 ; i < num ; i++){
        if(num%i== 0){
            return false ;
        }
    }
    return true ;
}

int main(){
int num ;
cout<< "Enter the Number to check"<<endl ;
cin >> num ;

bool ans = checkPrime(num);

if(ans){
    cout<< num <<" is a Prime number"<<endl ;
}else{
    cout<< num <<" is a non Prime number"<<endl ;
}

    return 0 ;
}