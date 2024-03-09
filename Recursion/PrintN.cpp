// Printing a number 1-n 

#include<bits/stdc++.h>
using namespace std ;

void nNumbers(int n){
    if(n == 0)
    return ;

    nNumbers(n-1);
    cout<<n<<" ";
}

int main(){

int num ;
cout<<"Enter the Number"<<endl ;
cin >> num ;

nNumbers(num);

    return 0 ;
}