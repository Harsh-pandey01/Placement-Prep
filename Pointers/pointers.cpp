// Everything about pointers
#include<bits/stdc++.h>
using namespace std ;

int main(){

  int num = 5 ;

//  & operator stores gives us the memory location of variable
  cout<<&num<<endl ;
// Pointer is a derived variable used to store the memory address of the variables

int *ptr = &num ;
//ptr stores the memory location of num variable
// *ptr means value present at the memory location pointed by ptr pointer

cout<<ptr<<endl ;
cout<<*ptr<<endl ;

// Always initialise a pointer , if not any atleast by 'NULL' because if not , it will point to some garbage location
// int *ptr2 = 0 ;
// cout<<*ptr2<<endl ; "Segmentation Error because no any such memory location is present as 0 or cant be read "

    return 0 ;
}