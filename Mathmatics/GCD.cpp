// We have to find the GCD of a number
#include<iostream>
using namespace std ;

int findGCD(int num1 , int num2){
    if(num1 == 0) return num2 ;
    if(num2 == 0) return num1 ;

    while(num1!=num2){
        if(num1 > num2){
            num1 = num1-num2 ;
        }else{
            num2 = num2 - num1 ;
        }
    }
    return num1 ;

}

int main(){
int num1,num2 ;
cout<<"Enter the numbers"<<endl ;
cin>>num1 ;
cin >> num2 ;

int ans = findGCD(num1,num2);

cout<<"The GCD of the numbers is " << ans <<endl ;

    return 0 ;
}