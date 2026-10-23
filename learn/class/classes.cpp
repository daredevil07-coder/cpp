// 🟣 C++ Chapter 6 — struct


// 6.1 struct
// ├── What is struct                 ✅
// ├── Creating objects               ✅
// ├── Accessing members (.)          ✅
// ├── Multiple objects               ✅
// ├── Direct initialization          ✅
// ├── Struct + functions             ✅
// ├── Array of structs               ✅
// ├── Loop through structs           ✅
// ├── Find highest marks             ✅
// ├── Struct + user input            ✅
// └── Dynamic array of structs       ✅


// 6.2 Struct Deeper Concepts
// ├── Pointer to struct              ✅
// ├── -> operator                    ✅
// ├── Modify struct through pointer  ✅
// ├── . vs ->                        ✅
// ├── Struct + pointer + function    ✅
// ├── Struct + pointer + array       ✅
// ├── Struct by reference            ✅
// ├── Nested structs                 ✅
// └── Pointer + nested struct        ✅ COMPLETE

#include <iostream>
#include <string>
using namespace std;
// struct lets us group different pieces of information about one thing together.


// 🧠 Imagine a student

// A student might have:

// Name     → "Rahul"
// Age      → 20
// Marks    → 85

// Without a struct, we'd need separate variables:

string name = "Rahul";
int age = 20;
int marks = 85;

// But these three variables are all related to one student.

// A struct lets us put them together:

struct Student {
    string name;
    int age;
    int marks;
};

// struct
//   ↓
// BLUEPRINT

// object
//   ↓
// ACTUAL DATA
int main() {
struct Student {
    string name;
    int age;
    int marks;
};
Student s1;

s1.name = "Rahul";
s1.age = 20;
s1.marks = 85;
Student s1 = {"Aman", 20, 85};
}


        // bubble sort 
        // insertion sort 
            // insert into sorted portion 


//       🔹 Topic 6.1 — struct
// Part 3 — Struct + Functions

// Now let's combine structs with functions. 🔥      

struct Student {
    string name;
    int marks;
};

void show(Student s) {
    cout << s.marks;
}

int main() {
    Student s1 = {"Rahul", 95};

    show(s1);
}


// 🔹 Topic 6.1 — struct
// Part 4 — Struct with Array 🔥



// You can create an array of structs.

struct Student {
    string name;
    int marks;
};

// Then:

Student students[3];
int main (){
students[0].name = "Aman";
students[0].marks = 85;

students[1].name = "Riya";
students[1].marks = 92;

students[2].name = "Karan";
students[2].marks = 78;
}
// This means:

// students
//    ↓
// ┌────────────┬────────────┬────────────┐
// │ Student 0  │ Student 1  │ Student 2  │
// ├────────────┼────────────┼────────────┤
// │ name       │ name       │ name       │
// │ marks      │ marks      │ marks      │
// └────────────┴────────────┴────────────┘


// 🔹 Topic 6.1 — Struct
// Part 5 — Looping through an Array of Structs 🔄



// Instead of manually writing:

// cout << students[0].name;
// cout << students[1].name;
// cout << students[2].name;

// // we can use a loop:

// for(int i = 0; i < 3; i++) {
//     cout << students[i].name << " "
//          << students[i].marks << endl;
// }

// Output:

#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {

    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    // Taking input
    for(int i = 0; i < n; i++) {

        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> students[i].name;

        cout << "Enter marks: ";
        cin >> students[i].marks;
    }

    // Displaying students
    cout << "\n--- Student Details ---\n";

    for(int i = 0; i < n; i++) {
        cout << students[i].name
             << " - "
             << students[i].marks
             << endl;
    }

    // Finding highest marks
    int highestIndex = 0;

    for(int i = 1; i < n; i++) {

        if(students[i].marks >
           students[highestIndex].marks) {

            highestIndex = i;
        }
    }

    // Display topper
    cout << "\n--- Topper ---\n";

    cout << "Name: "
         << students[highestIndex].name << endl;

    cout << "Marks: "
         << students[highestIndex].marks << endl;


    // Release dynamic memory
    delete[] students;
    students = nullptr;

    return 0;
}


// 🔜 Next: 6.2 — Struct Deeper Concepts

// Part 1 — Pointer to a Struct 🎯
struct Student {
    string name;
    int marks;
};

Student s = {"Mandeep", 90};

// Student* p = &s;


//         p
//         ↓
//    ┌───────────┐
//    │  address  │
//    └─────┬─────┘
//          │
//          ↓
//    ┌───────────────┐
// s  │ name  Mandeep │
//    │ marks    90   │
//    └───────────────┘

// Normal object:
// s.name

// Pointer to object:
// p->name

// Part 2 — Changing Struct Data Through a Pointer 





struct Student{
    string name;
    int marks;

};
int main(){
Student s = { "Rahul", 85 };
Student* p = &s;
p->name = "Aman";
cout<< s.name;
}


// Part 4 — Passing Struct Pointer to a Function 🔥

// struct
//   +
// pointer
//   +
// function


// Structure
struct Student {
    string name;
    int marks;
};

// Function
void addMarks(Student* p) {
    p->marks += 20;
}

int main() {

    // Create a Student object
    Student s = {"Aman", 70};

    // Call the function and send address of s
    addMarks(&s);

    // Print updated marks
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}




// 🔹 Topic 6.2 — Struct Deeper Concepts
// Part 5 — Struct + Pointer + Array 🔥


#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {

    Student students[3] = {
        {"Aman", 80},
        {"Riya", 95},
        {"Karan", 88}
    };

    // Pointer points to the first student
    Student* p = students;

    cout << "First student: " << p->name << endl;
    cout << "Second student: " << (p + 1)->name << endl;
    cout << "Third student: " << (p + 2)->name << endl;

    return 0;
}



// 🔹 Topic 6.2 — Struct Deeper Concepts
// Part 6 — Passing a Struct by Reference 🔗

// You've already learned pointers, but there's another way to let a function modify the original object: reference.

#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

// Reference parameter
void addMarks(Student& s) {
    s.marks += 10;
}

int main() {

    Student student = {"Mandeep", 80};

    cout << "Before: " << student.marks << endl;

    addMarks(student);

    cout << "After: " << student.marks << endl;

    return 0;
}


// 🔹 Topic 6.2 — Struct Deeper Concepts
// Part 7 — Struct Inside Struct 🧩


#include <iostream>
using namespace std;

struct Address {
    string city;
    int pin;
};

struct Student {
    string name;
    int marks;
    Address address;
};

int main() {

    Student s = {
        "Mandeep",
        90,
        {"Delhi", 110001}
    };

    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
    cout << "City: " << s.address.city << endl;
    cout << "PIN: " << s.address.pin << endl;

    return 0;


}


// s.address.city
//  ↑    ↑       ↑
//  │    │       └── member of Address
//  │    └────────── Address object
//  └─────────────── Student object


// 🔹 Topic 6.2 — Struct Deeper Concepts
// Part 8 — Struct + Pointer to Nested Struct 🧩➡️


// struct Address {
//     string city;
// };

// struct Student {
//     string name;
//     Address address;
// };

// int main() {

//     Student s = {
//         "Aman",
//         {"Delhi"}
//     };

//     Student* p = &s;

//     cout << "Name: " << p->name << endl;
//     cout << "City: " << p->address.city << endl;

//     return 0;
// }