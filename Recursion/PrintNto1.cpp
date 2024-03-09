// We are given a number and we have to print numbers from N to 1

#include<bits/stdc++.h>
using namespace std ;

void PrintNumbers(int n){
    if(n == 0){
        return ;
    }
    cout<<n<<" ";
    PrintNumbers(n-1);
}



int main(){
int num ;
cout<<"Enter the number"<<endl ;
cin >> num ;

PrintNumbers(num);

    return 0 ;
}