// 1️⃣ What is Function Overloading?

// Function overloading means:

// Having multiple functions with the same name but different parameter lists.

// Example:

// void add(int a, int b) {
//     cout << a + b << endl;
// }

// void add(double a, double b) {
//     cout << a + b << endl;
// }

// Both are called add().

// But:

// add(int, int)
// add(double, double)

// have different parameter types.

// C++ looks at the arguments and decides which function to call.


// 3️⃣ Different Number of Parameters

// This is another way to overload.

// void display() {
// //     cout << "Hello" << endl;
// // }

// // void display(int age) {
// //     cout << "Age: " << age << endl;
// // }

// // void display(int age, string name) {
// // //     cout << name << " is " << age << " years old." << endl;
// // // }




// // // 5️⃣ 🔥 Very Important: Return Type Alone Cannot Overload

// // // This is one of the most important exam questions.

// // // You cannot do this:

// // // int calculate(int a, int b) {
// // //     return a + b;
// // // }

// // // double calculate(int a, int b) {
// // //     return a + b;
// // // }

// // // ❌ Invalid

// // // Why?

// // // Because the parameter list is exactly the same:

// // // calculate(int, int)



// // 7️⃣ Function Overloading vs Constructor Overloading

// // You've already learned constructor overloading.

// // For example:

// // class Student {
// // public:

// //     Student() {
// //     }

// //     Student(string name) {
// //     }

// //     Student(string name, int marks) {
// //     }
// // };

// // That's constructor overloading.

// // Function overloading works on the same fundamental idea:

// // Same name
// //    +
// // Different parameter list
// //    ↓
// // Overloading

// // The difference is simply that constructors have the same name as the class.



// 8️⃣ Member Function Overloading

// You can overload functions inside a class too.

// class Calculator {
// public:

//     void add(int a, int b) {
//         cout << a + b << endl;
//     }

//     void add(int a, int b, int c) {
//         cout << a + b + c << endl;
//     }
// };

// Then:

// Calculator c;

// c.add(10, 20);
// c.add(10, 20, 30);

// C++ chooses the correct member function.

// This is directly relevant to your OOP chapter.



// 9️⃣ Function Overloading + Default Arguments ⚠️

// This is where things become interesting.

// Suppose:

// void display(int x) {
//     cout << x << endl;
// }

// void display(int x, int y = 10) {
//     cout << x << " " << y << endl;
// }

// Now:

// display(5);

// Which function should C++ choose?

// Both are possible:

// display(int)
//       ↑
//    possible

// display(int, int = 10)
//       ↑
//    also possible

// So the call becomes ambiguous ❌.

// This is an important relationship between function overloading and default arguments.

// Therefore:

// Don't create overloads that become indistinguishable because of default parameters.


#include <iostream>
using namespace std;

class Calculator {
public:
    void add(int a, int b) {
        cout << "Integer addition: " << a + b << endl;
    }

    void add(double a, double b) {
        cout << "Double addition: " << a + b << endl;
    }

    void add(int a, int b, int c) {
        cout << "Three numbers: " << a + b + c << endl;
    }
};

int main() {
    Calculator calculator;

    calculator.add(10, 20);
    calculator.add(10.5, 20.5);
    calculator.add(10, 20, 30);

    return 0;
}





// 🔥 One more important related topic: Function Overloading + Scope

// Your syllabus specifically lists “Function overloading and Scope rules.”

// Let's learn the scope part next, because it directly affects how C++ finds variables/functions.

// What is scope?

// Scope = the region of a program where a name can be accessed.

// Example:




#include <iostream>
using namespace std;

int x = 100;

void test() {
    int x = 50;

    cout << x << endl;
}

int main() {
    cout << x << endl;

    test();

    return 0;
}