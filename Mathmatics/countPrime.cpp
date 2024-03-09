// We are given a number and we have to find the count of all the prime number which are less than that number
#include<bits/stdc++.h>
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
cout<<"Enter the number"<<endl ;
cin >> num;
int count = 0 ;
// Approach 1 :- loop till the number num and for each element check weather that is a prime number or not and store them
// into count which will be desired answer  .
// TC - o(n2) 
// if(num!=1){
//     for(int i = 2 ; i < num ; i++){
//         if(checkPrime(i)){
//             count++ ;
//         }
//     }
// }
// cout<<"The number of prime number is "<< count << endl ;

// Approah 2:-Using Seive of Eratosthenus
vector<bool>primes(num+1,true);
primes[0] = false ;
primes[1] = false ;

for(int i = 2 ; i < num + 1 ; i++){
    if(primes[i]){
        count++ ;
    //   Marking false to all the multiple of i 
    for(int j = 2*i ; j < num + 1 ; j = j + i){
        primes[j]=false ;
    }
    }
}
cout<<"The number of prime number is "<< count << endl ;

    return 0 ;
}