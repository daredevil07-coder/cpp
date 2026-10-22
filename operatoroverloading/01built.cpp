// built in operations
// ++x;
// -x;
// !flag;
// operation 

#include<iostream>
using namespace std;

class counter{
    public:
    int value;
    counter(int v=0){
        value =v;
        
    }
    // operator is a c++ keyword?
    void operator++(){
        value++;
    }
    void operator--(){
        value--;
    }
    void operator!(){
        value = !value;
    }
    void operator-(){
        value = -value;
    }
    void display(){
        cout<<value<<endl;
    }
};


int main(){
    counter c1(15);
    ++c1;
    cout << c1.value<<endl;
}

// prefix= 
// 1.operator++()
// 2.increment before returning the value 
// 3.return the updated object 
// 4.return type counter
// overloading the decremnt operator delete[]prefix overloading of unary operator--
