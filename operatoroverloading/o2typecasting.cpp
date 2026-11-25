// basic type to basic type 
// basic type to class type 
// class type to basic type 
// one class type to another class type 

// type of conversion 


// implicit compilier handles conversion automatically 
// explicit   smaller data type to larger data type 

#include <iostream>
using namespace std;
// basic type to basic type
class Number{
    public:
        int value;
        Number(int v):value(v){
            numberOfObjects++;      

        }
};


// bsic type to class type 

class Distance{
    private:
        int meter;
        int centimeter;

    public:
        Distance{}
};

// direct initialization
// Distance d2(5)  iimplicit conersion from int to disstance 
// using the explicit keyword to prevent implicit conversion 

// copy initialization 
// distance d1 = 5; imlpicit conversion from int to distance

class DistanceExplicit(int m){
    meter = 
}

int main(){
    Number n = 10;

    double x = 12.8;
    int y = static_cast<int>(x);
    cout << y << endl;
}


// inheritence
// new class wll inherit the properties of the base class and can be used to
//  create new objects. The derived class can also override the methods of the 
//  base class to provide specific implementations. 

//  public 
//  protected 