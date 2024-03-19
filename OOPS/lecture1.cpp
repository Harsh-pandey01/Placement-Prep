// basics of the oops

#include<bits/stdc++.h>
using namespace std ;

// declaration of a class of hero type
class Hero{

private:
int rating ;

public:
string name;
int level ;

// getters and setter

void setRating(int rating){
    this->rating = rating ;
    cout<<this<<endl ;

}

int getRating(){
    return this->rating ;
}

};

int main(){

Hero h1 ;
h1.name = "ramesh";
cout<<h1.name<<endl ;

h1.setRating(15);
cout<< "The rating of the ramesh is "<< h1.getRating() <<endl; 







    return 0;

}