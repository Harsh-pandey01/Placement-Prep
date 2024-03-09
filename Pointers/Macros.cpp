// About Macros
// We create macros so that we can use the value of that macros as many times as we want
// We can create a Global variable if we want to use many times but it can be changed but
// Once we define the value of the macros,it cant be changed

#include<bits/stdc++.h>
using namespace std ;

#define PI 3.14

int main(){
  
  cout<<"The value of pi is"<<PI<<endl ;

//    cannot change the value of macros
// PI = 3 ;

int radius = 3 ;

 int circumference = 2*PI*radius ;
 cout<<"circumference of the circle is "<< circumference ;

    return 0 ;
}