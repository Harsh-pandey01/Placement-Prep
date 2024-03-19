// single inharitance :-

#include<iostream>
using namespace std ;

class Animal {
    public:
    int age ;
    int weight ;

      void speak(){
        cout<<"Animal speaks"<<endl ;
      }
};


// child class using single inheritance

class Dog : public Animal{

};

int main(){

Dog Tufyy ;
Tufyy.speak();
    return 0 ;
}

