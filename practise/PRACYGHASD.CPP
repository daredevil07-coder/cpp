#include <iostream>
#include <string>
using namespace std;

class student{
    private:
    string name;
    int marks;

    public:
    void setdata(string name,int marks){
        this->name = name;
        this->marks = marks;
    }


    void addmarks(int extra){
        marks = marks+extra 
    }
    int getmarks();
    void display();


};

int main(){
    student s1;
    student s2;

}