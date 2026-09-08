// whewn we use parameter then we can make more objects and give me 
// diffrent data but when we dont use parameter we can craete multi-le objects 
// but each will get same value .
#include <iostream>
#include <string>
using namespace std;


class student{
    public:
    string name;
    int marks;

    void data(string names,int mark){
        name = names;
        marks = mark;
    }

    void addmarks(int extra){
        marks = marks + extra;

    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Mark:"<<marks<<endl;
    }
};

int main(){
    student s1;
    student s2;
    s1.addmarks(29);

    s1.data("mandeep",34);
    s2.data("sandeep",34);
    
    s1.addmarks(29);
    s1.display();

}