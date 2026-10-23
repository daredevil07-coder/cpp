#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string name;
    int age;
    int marks;

    void display() {
        cout << marks << endl;
    }
};

int main() {
    student s1;
    s1.marks = 78;
    s1.age = 76;
    s1.display();

    return 0;
}