// 🏗️ Chapter 7 — OOP
// 🟢 7.4 Constructors — Part 1


// a  constructer gives us a way to intialize the object automatically when it is created .


// 🧠 What is a Constructor?

// A constructor is a special function that automatically runs when an object is created.
#include <iostream>
using namespace std;


class Student {

public:

    Student() {
        cout << "Student object created!" << endl;
    }
};

Student s1;

// Student s1;
//      ↓
// Constructor runs automatically
//      ↓
// "Student object created!"

// s1.Student();   // ❌

// 🔑 Constructor Rules

// A constructor has some special rules:

// 1. Same name as the class

class Student {

public:
    Student() {
    }
};

// 2. No return type

// ❌ Don't write:

// void Student()

// ❌ Don't write:

// int Student()

// 3. Runs automatically




class Student {

public:

    Student() {
        cout << "Student object created!" << endl;
    }
};

int main() {

    // Student s1;

    return 0;
}



// 🏗️ 7.4 Constructors — Part 2
// 🎯 Constructor for Initializing Data


#include <iostream>
using namespace std;

class Student {

private:
    string name;
    int marks;

public:

    Student(string studentName, int studentMarks) {
        name = studentName;
        marks = studentMarks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s1("Mandeep", 90);
    Student s2("Rahul", 80);

    s1.display();
    cout << endl;
    s2.display();

    return 0;
}

// 🏗️ Chapter 7 — OOP
// 🟢 7.4 Constructors — Part 3: Default Constructor


// A default constructor is a constructor that takes no parameters.

// class Student {

// public:

//     Student() {
//         cout << "Student created!" << endl;
//     }
// };

// | Constructor   | Parameters | Example                      |
// | ------------- | ---------: | ---------------------------- |
// | Default       |          0 | `Student s1;`                |
// | Parameterized |          2 | `Student s1("Mandeep", 90);` |


// 🏗️ 7.4 Constructors — Part 4
// 🔥 Default Constructor vs No Constructor



// 🏗️ 7.4 Constructors — Part 5
// 🔥 Parameterized Constructor


// Student(string studentName, int studentMarks) {
//     name = studentName;
//     marks = studentMarks;
// }


#include <iostream>
using namespace std;

class Student {

private:
    string name;
    int marks;

public:

    Student(string studentName, int studentMarks) {
        name = studentName;
        marks = studentMarks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s1("Mandeep", 90);
    Student s2("Rahul", 80);

    s1.display();

    cout << endl;

    s2.display();

    return 0;
}



// 🏗️ 7.4 Constructors — Part 6
// 🔥 Constructor Overloading


// As long as their parameter lists are different.

// Sometimes you want an object with default values:

#include <iostream>
using namespace std;

class Student {

private:
    string name;
    int marks;

public:

    Student() {
        name = "Unknown";
        marks = 0;
    }

    Student(string studentName, int studentMarks) {
        name = studentName;
        marks = studentMarks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s1;
    Student s2("Mandeep", 90);

    s1.display();

    cout << endl;

    s2.display();

    return 0;
}


// 🏗️ Chapter 7 — OOP
// 🟢 7.4 Constructors — Part 7: Constructor + private



// class Student {

// private:
//     string name;
//     int marks;

// public:

//     Student(string studentName, int studentMarks) {
//         name = studentName;
//         marks = studentMarks;
//     }
// };

// 🔒 The constructor can access private members.

// Why?

// Because the constructor is a member function of the class.

        //      Student class
        //   ┌─────────────────┐
        //   │                 │
        //   │ 🔒 name         │
        //   │ 🔒 marks        │
        //   │                 │
        //   │ 🏗️ Constructor  │
        //   │       ↓         │
        //   │ Can access them │
        //   └─────────────────┘


        // Private data is protected from outside, but class member functions—including constructors—can access it.


        // 🏗️ 7.4 Constructors — Part 8
// ⚡ Constructor Overloading with Different Data

// Student(string studentName, int studentMarks)
//     : name(studentName), marks(studentMarks) {
// }




// 🟣 Chapter 7.4 — Constructors
// 🔥 Topic: Copy Constructor


// 🧠 What is a Copy Constructor?

// A copy constructor creates a n
// ew object using an existing object.

// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// private:
//     string name;
//     int marks;

// public:
//     Student(string studentName, int studentMarks) {
//         name = studentName;
//         marks = studentMarks;
//     }

//     Student(const Student &other) {
//         name = other.name;
//         marks = other.marks;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main() {

//     Student s1("Mandeep", 90);

//     Student s2 = s1;

//     s1.display();
//     s2.display();

//     return 0;
// }


// s1                    s2
// ┌────────────┐       ┌────────────┐
// │ Mandeep    │       │ Mandeep    │
// │ 90         │       │ 90         │
// └────────────┘       └────────────┘

// The copy constructor copies the values, not the connection between the objects.



// Copy constructor = new independent object with copied data.

// You use a copy constructor when you want to create a new
//  object that starts with the same data/state as an existing object.




// 🟣 Chapter 7.4 — Copy Constructor
// Next: Shallow Copy vs Deep Copy


// But what if the class contains a pointer?
// s1 ──→ pointer ──→ Memory A
//                        ↑
// s2 ──→ pointer ────────┘

// Now both objects may point to the same memory.

// hat can create problems when one
//  object changes or deletes that memory.

// That's called a shallow copy.

// when both pointer point the same memoory 

// you can get serious memory-management problems.

// That's why, when a class owns dynamically allocated memory, we often need a deep copy.

// Deep copy will look like:
// s1 ──→ [90]

// s2 ──→ [90]

// Two different memory locations.





// With a deep copy, we create new memory for the new object.

// s1 ──→ [90]   ← Memory A

// s2 ──→ [90]   ← Memory B

// Now they are completely independent.

// 🔨 Let's build the copy constructor
// Student(const Student &other) {
//     marks = new int(*other.marks);
// }

// The important line is:

// marks = new int(*other.marks);

// Let's break it down:

// other.marks

// Gets the pointer from the original object.

// *other.marks

// Gets the value stored in that memory.

// If:

// other.marks → [90]

// then:

// *other.marks

// is:

// 90
// new int(...)

// Creates new memory containing that value.

// So:

// marks = new int(*other.marks);

// means:

// "Create a new integer in memory and put the same value there.

// #include <iostream>
// using namespace std;

// class Student {
// private:
//     int* marks;

// public:
//     Student(int studentMarks) {
//         marks = new int(studentMarks);
//     }

//     Student(const Student &other) {
//         marks = new int(*other.marks);
//     }

//     void changeMarks(int newMarks) {
//         *marks = newMarks;
//     }

//     void display() {
//         cout << "Marks: " << *marks << endl;
//     }

//     ~Student() {
//         delete marks;
//     }
// };

// int main() {

//     Student s1(90);

//     Student s2 = s1;

//     s2.changeMarks(95);

//     s1.display();
//     s2.display();

//     return 0;
// }


// |                      | Shallow Copy | Deep Copy |
// | -------------------- | ------------ | --------- |
// | Pointer copied?      | ✅            | ❌         |
// | Memory shared?       | ✅            | ❌         |
// | New memory created?  | ❌            | ✅         |
// | Independent objects? | ❌            | ✅         |
// | Useful with `new`?   | Dangerous    | ✅         |




