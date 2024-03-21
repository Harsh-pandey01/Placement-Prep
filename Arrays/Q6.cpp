// Rotate Array by D places 

#include<bits/stdc++.h>
using namespace std ;

void dplaces(vector<int>& v,int k){
    int n = v.size();
    vector<int>temp(n,0);
    for(int i = 0 ; i < n ; i++){
        temp[(i+k)%n] = v[i];
    }

    for(int i = 0 ; i < n ; i++){
      v[i] = temp[i];
    }
}

void print(vector<int>& v){
for(int i = 0 ; i < v.size() ; i++){
    cout << v[i] << " ";
}
cout << endl ;
}



int main(){
    vector<int>v = {1,4,5,7,8,5,9};
    dplaces(v,3);
    print(v);


    return 0 ;
}