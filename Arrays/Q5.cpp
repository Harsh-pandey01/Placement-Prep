// LEFT ROTATE THE ARRAY BY ONE

#include<bits/stdc++.h>
using namespace std ;

void print(vector<int>& v){
for(int i = 0 ; i < v.size() ; i++){
    cout << v[i] << " ";
}
cout << endl ;
}

void leftRotate(vector<int>& v){
    for(int i = v.size()-1 ; i> 0 ; i--){
        swap(v[i],v[i-1]);
    }
}

int main(){

vector<int>v = {1,4,5,7,8,5,9};

// left rotate the vector
cout<<"Before:-"<<endl ;
print(v);
leftRotate(v);
cout<<"After:-"<<endl ;
print(v) ;

    return 0 ;
}