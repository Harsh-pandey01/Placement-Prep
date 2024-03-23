// SECOND LARGEST NUMBER IN AN ARRAY

#include<bits/stdc++.h>
using namespace std ;

int main(){

vector<int>v = {1,4,5,7,8,9,4,5,7,8,41,5,6} ;

// Approach 1 :-
/*Sort the vector and try to find the second largest element*/
// Approach 2 :- Optimised
/*Kepp the track of the largest and second largest number*/

int largest = v[0] ;
int ans = v[0] ;

for(int i = 0 ; i < v.size(); i++){
    if(v[i] > largest){
        ans = largest ;
        largest = v[i];
    }

    if(v[i] < largest && v[i] > ans){
        ans = v[i];
    }
}

cout << "The second largest is "<<ans << endl ; 
    return 0 ;
}