// It is one of the important piller of the oops in which
// props get inherited from the parent class to the child class

#include<bits/stdc++.h>
using namespace std ;

// Created a 'Human' class as a Parent class
class Human{

public:
int weight ;
int height ;
int age ;

int getAge(){
return this->age ;
}

void setWeight(int weight){
    this->weight = weight ;
}

};

// ---------------------------Creating a child class Male for parent as Human

class Male : public Human{

public :
string color ;

void sleep(){
    cout<<"male is sleeping"<<endl  ;
} 


};

int main(){

// creating a object of Male class

Male harsh ;

cout<<harsh.age <<endl ;


    return 0 ;
}