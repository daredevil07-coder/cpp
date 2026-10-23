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

        }
};


bs

int main(){
    Number n = 10;

    double x = 12.8;
    int y = static_cast<int>(x);
    cout << y << endl;
}