// It is crucial because we dont have any method to trivers 
// varius container as the maps and sets toh bahut use aata hai insab ka

#include<bits/stdc++.h>
using namespace std ;

int main(){

vector<int>v = {2,1,4,5,2,4,5,4};
for(int i = 0 ; i < v.size() ; i++){
    cout<<v[i]<<" ";
}

// iterators are just simply like pointers

// Ho o declare a iterators
vector<int> ::iterator it = v.begin() ;
// it will points to the first element of the vecotr
// similarily like a pointers

// how to access the the value 
cout<< (*it)<<" " ;
// it will be similar to the pointers
cout<<(*(it+1))<<endl ;

// dekho iska sabse badha use hai iterate karne me 
// vecotr me manlofir bhi loop laga sakte hai but jaha looping nahi use hoti hai 
// vaha iterators are widely used

// upper ke jaise hi declare kardenge apana iterators
// aage jate jayenge jab tak apne ko end na mil jaye

for(it = v.begin() ; it!= v.end() ; it++){
cout<< (*it) << " ";

}



    return 0;
}