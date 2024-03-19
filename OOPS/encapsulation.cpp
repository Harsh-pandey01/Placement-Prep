// encapsulation is simply hidding the data members

#include<bits/stdc++.h>
using namespace std ;

class Student{

// by defualt access modifier is "Private"
private :
int roll ;
int std ;
string name ;

// can be accessed using gatter ans setters
public :

string getname(){
    return this->name ;
}

void setname(string name){
     this->name = name ;
}

};


int main(){

    Student s1 ;
    s1.setname("harsh");
   cout<< s1.getname()<<endl ;

    return 0 ;
}