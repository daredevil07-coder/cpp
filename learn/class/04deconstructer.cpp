// 🟣 Chapter 7 — OOP
// 7.5 Destructors 🗑️


// ✅ What a destructor is
// ✅ Why we need it
// ✅ When it runs
// ✅ Dynamic memory cleanup
// ✅ delete vs delete[]
// ✅ Destructor runs automatically
// ✅ Destruction happens in reverse order
// ✅ Destructor cannot be overloaded 



// | Concept               | Destructor                        |
// | --------------------- | --------------------------------- |
// | Syntax                | `~Student()`                      |
// | Purpose               | Cleanup                           |
// | Runs                  | Automatically                     |
// | Parameters            | ❌ None                            |
// | Return type           | ❌ None                            |
// | Overloading           | ❌ Not allowed                     |
// | Dynamic single memory | `delete`                          |
// | Dynamic array         | `delete[]`                        |
// | Multiple objects      | Each gets its own destructor call |
// | Destruction order     | Reverse creation order            |

// 🟣 Why do we need a Destructor?

// we need it bcuz when we dont use dynamic memory 
// s1 destroyed
//    ↓
// marks destroyed automatically
//    ↓
// Done ✅


// but when we use dynamic memory 
// STACK
// ┌─────────────┐
// │    s1       │
// │ marks ──────┼──────────┐
// └─────────────┘          │
//                          ↓
//                     HEAP MEMORY
//                     ┌─────────┐
//                     │   90    │
//                     └─────────┘


// Now s1 gets destroyed:

// s1 ❌ destroyed

// But what about the heap memory?

// HEAP
// ┌─────────┐
// │   90    │  ← still allocated 😬
// └─────────┘

// That's the problem.






// 🧠 What is a Destructor?

// A destructor is a special member function that 
// automatically runs when an object is destroyed.


// Constructor
//     ↓
// Object is created 🏗️
//     ↓
// Object does its work
//     ↓
// Destructor
//     ↓
// Object is destroyed 🗑️



// Constructor
// Student() {
//     cout << "Object created" << endl;
// }

// Destructor
// ~Student() {
//     cout << "Object destroyed" << endl;
// }



#include <iostream>
using namespace std;

class Student {
private:
    int* marks;

public:
    Student(int studentMarks) {
        marks = new int(studentMarks);
        cout << "Constructor called" << endl;
    }

    ~Student() {
        delete marks;
        cout << "Destructor called" << endl;
    }

    void display() {
        cout << "Marks: " << *marks << endl;
    }
};

int main() {

    Student s1(90);

    s1.display();

    return 0;
}


// | Constructor                 | Destructor                    |
// | --------------------------- | ----------------------------- |
// | Creates/initializes object  | Cleans up object              |
// | `Student()`                 | `~Student()`                  |
// | Called automatically        | Called automatically          |
// | Can have parameters         | Cannot have parameters        |
// | Can be overloaded           | Cannot be overloaded          |
// | Runs when object is created | Runs when object is destroyed |




// 🟣 Chapter 7 — OOP
// 7.5 Destructors — Part 2: Destructor & Object Lifetime




// 2 objects → 2 constructor calls → 2 destructor calls.

// And destructors run when the objects are destroyed.

// 🔥 Important rule

// For objects created in the same scope:

// First created  → Last destroyed
// Second created → First destroyed


// Creation:   s1 → s2 → s3
// Destruction: s3 → s2 → s1




// 🟣 7.5 Destructors — Part 3: Destructor with Dynamic Memory




// Student object
// ┌──────────────┐
// │ marks ───────┼──────→ [90]
// └──────────────┘        HEAP

// The object owns that heap memory.

// When s1 is destroyed, the object disappears—but the
//  dynamically allocated memory needs to be released too.


#include <iostream>
using namespace std;

class Student {
private:
    int* marks;

public:
    Student(int studentMarks) {
        marks = new int(studentMarks);
        cout << "Constructor: Memory allocated" << endl;
    }

    void display() {
        cout << "Marks: " << *marks << endl;
    }

    ~Student() {
        delete marks;
        cout << "Destructor: Memory released" << endl;
    }
};

int main() {
    Student s1(90);

    s1.display();

    return 0;
}


// int* data = new int(10);

// needs:

// delete data;

// And:

// int* data = new int[10];

// needs:

// delete[] data;






// 🟣 Chapter 7 — OOP
// 7.5 Destructors — Part 4: Destructors + Dynamic Arrays


#include <iostream>
using namespace std;

class Student {
private:
    int* marks;
    int size;

public:
    Student(int studentSize) {
        size = studentSize;
        marks = new int[size];

        cout << "Memory allocated" << endl;
    }

    void setMarks(int index, int value) {
        marks[index] = value;
    }

    void display() {
        cout << "Marks: ";

        for(int i = 0; i < size; i++) {
            cout << marks[i] << " ";
        }

        cout << endl;
    }

    ~Student() {
        delete[] marks;

        cout << "Memory released" << endl;
    }
};

int main() {
    Student s1(5);

    s1.setMarks(0, 90);
    s1.setMarks(1, 85);
    s1.setMarks(2, 95);
    s1.setMarks(3, 88);
    s1.setMarks(4, 92);

    s1.display();

    return 0;
}



// 🟣 Chapter 7 — OOP
// 7.5 Destructors — Part 5: Destructor Rules & Final Understanding

// 🔥 Rule 1 — Destructor has ~



// 🔥 Rule 2 — Destructor has NO return type

// ❌ Wrong:

// void ~Student()

// ❌ Wrong:

// int ~Student()

// ✅ Correct:

// ~Student()


// 🔥 Rule 3 — Destructor takes NO parameters

// ❌ You cannot do:

// ~Student(int x)

// A destructor is simply:

// ~Student() {
//     // cleanup
// }

// 🔥 Rule 4 — Destructor cannot be overloaded


// 🔥 Rule 5 — You normally don't call it yourself

// You don't normally write:

// s1.~Student();

// Instead: