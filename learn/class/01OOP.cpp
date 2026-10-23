// 🟣 C++ Chapter 7 — Object-Oriented Programming (OOP) 🏗️
// 🏗️ Chapter 7 — OOP Roadmap
// 7.1 🧠 OOP Fundamentals
// What is OOP?
// Why do we need OOP?
// Procedural vs Object-Oriented Programming
// Class vs Object
// Real-world analogy
// Attributes & methods
// 7.2 📋 Classes & Objects
// Creating a class
// Creating objects
// Data members
// Member functions
// Accessing members
// Multiple objects
// Complete combined code
// 7.3 🔐 Access Modifiers
// public
// private
// protected
// Why data hiding matters
// 7.4 🏗️ Constructors
// What is a constructor?
// Default constructor
// Parameterized constructor
// Constructor overloading
// this pointer
// Complete combined code
// 7.5 🗑️ Destructors
// What is a destructor?
// ~ClassName()
// When destructor runs
// Memory/resource cleanup
// 7.6 📦 Encapsulation
// Data hiding
// Getters
// Setters
// Validation
// Real-world use
// 7.7 🧬 Inheritance
// Why inheritance?
// Base & derived classes
// Single inheritance
// Multilevel inheritance
// Multiple inheritance
// Hierarchical inheritance
// Hybrid inheritance
// Access modes
// 7.8 🔄 Polymorphism
// Compile-time polymorphism
// Function overloading
// Operator overloading
// Runtime polymorphism
// Function overriding
// Virtual functions
// 7.9 🎯 Abstraction
// What is abstraction?
// Abstract classes
// Pure virtual functions
// Interfaces concept
// 7.10 🧠 Advanced OOP
// Static members
// Friend functions
// Friend classes
// Copy constructor
// Shallow vs deep copy
// Composition
// Aggregation
// 7.11 🚀 OOP Projects
// Student Management System
// Bank Account System
// Employee Management System
// Library Management System
// 7.12 🏁 Complete OOP Revision
// Full concept map
// Common mistakes
// Interview questions
// DSA connection
// Complete combined code



    //          OOP 🏗️
    //             │
    //    ┌────────┴────────┐
    //    ↓                 ↓
    // CLASS 📋          OBJECT 👤
    //    │                 │
    //    └────────┬────────┘
    //             ↓
    //    Access Modifiers 🔐
    //             ↓
    //      Constructors 🏗️
    //             ↓
    //       Encapsulation 📦
    //             ↓
    //       Inheritance 🧬
    //             ↓
    //      Polymorphism 🔄
    //             ↓
    //       Abstraction 🎯
    //             ↓
    //        OOP Projects 🚀
    

    
// Topic 7.1 — What is OOP?

// to keep each object and its data and behavior together


// the four pillars of opp are 

//               OOP
//                │
//     ┌──────────┼──────────┐
//     ↓          ↓          ↓
// Encapsulation Inheritance Polymorphism
//     🔒          🧬          🔄
//                │
//                ↓
//           Abstraction 🎯




// 🔒 1. Encapsulation

// Keep data and functions together and control access to the data.

// 🧬 2. Inheritance

// A new class can reuse/extend an existing class.

// 🔄 3. Polymorphism

// The same interface/function can behave differently in different situations.

// 🎯 4. Abstraction

// Hide unnecessary implementation details and expose what is important.








// So OOP combines them:

//              Student
//                 │
//        ┌────────┴────────┐
//        ↓                 ↓
//      DATA             BEHAVIOR
//       📦                 ⚙️
//        │                 │
//      name              study()
//      age               display()
//      marks             attendClass()

// That's why we say:

// Object = Data + Behavior

#include <iostream>
using namespace std;

class Student {

public:

    // Data members
    string name;
    int marks;

    // Member function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    // Creating two objects
    Student s1;
    Student s2;

    // Data for first student
    s1.name = "Mandeep";
    s1.marks = 90;

    // Data for second student
    s2.name = "Rahul";
    s2.marks = 80;

    // Calling member functions
    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    return 0;
}


// CLASS
//   ↓
// Blueprint / Design 📋
//   ↓
// Creates objects
//   ↓
// OBJECT
//   ↓
// Actual entity 👤
//   ↓
// Contains:
//   ├── Data 📦
//   └── Behavior ⚙️




// Part 4 — Attributes & Methods 📦⚙️
// inside a class 

// string brand;
// int speed;

// it represent the data/state of an object

// They're commonly called:

// Data members
// Attributes
// Properties (in some contexts)


// ⚙️ Methods / Member Functions

// A function inside a class is called a member function or method.

#include <iostream>
using namespace std;

class Car {

public:

    // Attributes / Data members
    string brand;
    int speed;

    // Method / Member function
    void drive() {
        cout << brand << " is driving at "
             << speed << " km/h" << endl;
    }
};

int main() {

    Car c1;

    c1.brand = "BMW";
    c1.speed = 200;

    c1.drive();

    return 0;
}


// Part 5 — Multiple Objects & Independent Data 👥

#include <iostream>
using namespace std;

class Student {

public:

    string name;
    int marks;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s1;
    Student s2;
    Student s3;

    // Object 1
    s1.name = "Mandeep";
    s1.marks = 90;

    // Object 2
    s2.name = "Rahul";
    s2.marks = 75;

    // Object 3
    s3.name = "Aman";
    s3.marks = 85;

    // Change only s1
    s1.marks = 100;

    cout << "--- Student 1 ---" << endl;
    s1.display();

    cout << "\n--- Student 2 ---" << endl;
    s2.display();

    cout << "\n--- Student 3 ---" << endl;
    s3.display();

    return 0;
}


// 🔥 One deeper point

// The class doesn't contain the individual values:

// class Student
//       ↓
// defines:
// name
// marks
// display()

// The objects contain their own values:

// s1 → Mandeep, 100
// s2 → Rahul, 75
// s3 → Aman, 85

// So remember:

// Class defines the structure; objects hold the actual state.








// same as previous code 
// Part 6 — Member Functions Working With Object Data ⚙️




// 🔹 Topic 7.1 — OOP Fundamentals
// Part 7 — The this Pointer 👀


// 🧠 What is this?

// Inside a member function, this is a pointer that points to the current object.

// this = pointer to the object that is currently calling the member function.

// 🔥 Then why use this->name?

// There are situations where explicitly writing this-> makes the code clearer, especially when a local variable/parameter has the same name.


#include <iostream>
using namespace std;

class Student {

public:

    string name;
    int marks;

    void display() {

        cout << "Name: " << this->name << endl;
        cout << "Marks: " << this->marks << endl;
    }
};

int main() {

    Student s1;
    Student s2;

    s1.name = "Mandeep";
    s1.marks = 90;

    s2.name = "Rahul";
    s2.marks = 80;

    s1.display();
    cout << endl;
    s2.display();

    return 0;
}




// 🔹 Topic 7.1 — OOP Fundamentals
// Part 8 — Why Do We Need Classes? 🤔








// to reuse and decrease the number of code writing same code again again 







// 🔹 Topic 7.1 — OOP Fundamentals
// Part 9 — Procedural Programming vs OOP ⚔️

// we put related data and functions together 


#include <iostream>
using namespace std;

class BankAccount {

public:

    int balance;

    void deposit(int amount) {
        balance += amount;
    }
};

int main() {

    BankAccount account;

    account.balance = 1000;

    account.deposit(500);

    cout << "Balance: " << account.balance << endl;

    return 0;
}



                       // 🏁 Topic 7.1 COMPLETE! 🎉


// 🟣 Chapter 7 — OOP
//    │
//    └── 7.1 OOP Fundamentals ✅
//        ├── What is OOP?                 ✅
//        ├── Why OOP?                     ✅
//        ├── Real-world modeling         ✅
//        ├── Class vs Object              ✅
//        ├── Attributes / Data members    ✅
//        ├── Methods / Member functions   ✅
//        ├── Multiple objects             ✅
//        ├── Object's own state           ✅
//        ├── this pointer                 ✅
//        └── Procedural vs OOP            ✅







// 🟣 C++ Chapter 7 — OOP 🏗️
// 🔹 Topic 7.2 — Classes & Objects 📋👤

// Part 1 — Creating a Class

// class Student {

// public:
//     string name;
//     int marks;
// };

// class tells C++:

// "I'm defining a new class."

// Student is the name of our class.


// class Student
//        │
//        ├── 📦 Data
//        │    ├── name
//        │    └── marks
//        │
//        └── ⚙️ Functions
//             └── display()


// 3️⃣ What is public:? 🔓

// For now, understand it simply as:

// public means these members can be accessed from outside the class.



// class Student {
// public:
//     string name;
//     int marks;
// };    this is our only blueprint of the class we havnot cretes 
// the object till now 





// 🔹 Topic 7.2 — Classes & Objects
// Part 2 — Accessing Object Members 🔑



