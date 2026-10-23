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



#include <iostream>
using namespace std;

class Student {

public:

    string name;
    int marks;

    void display(){
        cout << marks<<endl;
    }
};

int main() {

    Student s1;

    // Store data
    s1.name = "Mandeep";
    s1.marks = 90;

    // Read data
    cout << "Before: " << s1.marks << endl;

    // Change data
    s1.marks = 95;
    s1.display();

    // Read changed data
    cout << "After: " << s1.marks << endl;

    return 0;
}



// 🔹 Topic 7.2 — Classes & Objects
// Part 3 — Member Functions ⚙️


// 🧠 Why put a function inside the class?

// Think about a BankAccount.

// It has:

// 📦 Data
// ├── balance
// └── accountNumber

// ⚙️ Actions
// ├── deposit()
// ├── withdraw()
// └── checkBalance()



class Student {

public:

    string name;
    int marks;

    void display() {

        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    void study() {

        cout << name << " is studying." << endl;
    }
};

int main() {

    Student s1;

    s1.name = "Mandeep";
    s1.marks = 90;

    s1.display();
    // s1.study();

    return 0;
}


// 🔹 Topic 7.2 — Classes & Objects
// Part 4 — Member Functions With Parameters 🎯




// class Student {

// public:

//     string name;
//     int marks;

//     void addMarks(int extraMarks) {

//         marks = marks + extraMarks;
//     }

//     void display() {

//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main() {

//     Student s1;

//     s1.name = "Mandeep";
//     s1.marks = 90;

//     cout << "Before adding marks:" << endl;
//     s1.display();

//     s1.addMarks(5);

//     cout << "\nAfter adding marks:" << endl;
//     s1.display();

//     return 0;
// }



// 🔹 Topic 7.2 — Classes & Objects
// Part 5 — Returning Values From Member Functions 🔄


// 🔥 Why is this useful?

// A member function doesn't always have to print something.

// Compare:

// void
// void display() {
//     cout << marks;
// }

// It performs an action but returns nothing.

// int
// int getMarks() {
//     return marks;
// }

// It gives a value back.

// This is useful when another part of the program needs that value.




// 🔹 Topic 7.2 — Classes & Objects
// Part 6 — Member Functions Outside the Class 📂

// class Student {

// public:

//     void display();
// };

// There's no { } body. here basically we are telling we are 
// here ia an function we will difine it later 


void Student::display() {

    cout << "Hello";
}


// The :: is called the scope resolution operator.


#include <iostream>
using namespace std;

class Student {

public:

    string name;
    int marks;

    void display();
};

void Student::display() {

    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

int main() {

    Student s1;

    s1.name = "Mandeep";
    s1.marks = 90;

    s1.display();

    return 0;
}





// 🟣 7.2 Classes & Objects — Part 8
// 🔥 Methods with Parameters + Return Values Together

// #include <iostream>
// using namespace std;

// class Student {

// public:

//     string name;
//     int marks;

//     void addMarks(int extra) {
//         marks = marks + extra;
//     }

//     int getMarks() {
//         return marks;
//     }
// };

// int main() {

//     Student s1;

//     s1.name = "Mandeep";
//     s1.marks = 80;

//     s1.addMarks(10);

//     cout << "Name: " << s1.name << endl;
//     cout << "Marks: " << s1.getMarks() << endl;

//     return 0;
// }


// | Function                   | Purpose                |
// | -------------------------- | ---------------------- |
// | `void addMarks(int extra)` | Changes object         |
// | `int getMarks()`           | Gives information back |
// | `s1.addMarks(10)`          | Sends `10`             |
// | `s1.getMarks()`            | Receives `90`          |






// 🟣 7.2 Classes & Objects — Part 9
// 🔥 this Pointer in a Real Situation




// class Student {
// public:
//     string name;

//     void setName(string name) {
//         name = name;
//     }
// };

// here there is an nproblem here name is both assign to parameteer 
// and object cpp will think it as a parameter 

// void setName(string name) {
//     this->name = name;
// }