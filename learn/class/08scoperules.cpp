// 📘 Topic: Scope Rules

// Progress: 🔄 Starting now


// | Subtopic                        | Status |
// | ------------------------------- | ------ |
// | 🌍 Global Scope                 | ⏳      |
// | 📍 Local Scope                  | ⏳      |
// | 🧱 Block Scope                  | ⏳      |
// | 🎯 Function Parameter Scope     | ⏳      |
// | 🏫 Class Scope                  | ⏳      |
// | 👥 Variable Shadowing           | ⏳      |
// | `::` Scope Resolution Operator  | ⏳      |
// | 🧠 Scope-related exam questions | ⏳      |





// ⏳
// 📍 1.1 Subtopic — Local Scope

// A local variable is a variable declared inside a function or block.

// It can normally be used only within that scope.

// Example
#include <iostream>
using namespace std;

void show() {
    int marks = 90;

    cout << marks << endl;
}

int main() {
    show();

    return 0;
}


// ┌───────────────┐
// │   show()      │
// │               │
// │  marks = 90   │ ← exists here
// │               │
// └───────────────┘

// main() 🚪
// cannot directly access marks




// 🌍 1.2 Subtopic — Global Scope

// A global variable is declared outside all functions.

// It can be accessed by functions throughout that source file, subject to normal visibility/linkage rules.

#include <iostream>
using namespace std;

int marks = 90;   // 🌍 Global variable

void show() {
    cout << marks << endl;
}

int main() {
    cout << marks << endl;

    show();

    return 0;
}

// Here marks is outside main() and show():

// 🌍 Global Scope
//       │
//       ▼
//    marks = 90
//       │
//    ┌──┴──────┐
//    ▼         ▼
// show()     main()
//   ✅          ✅


// int marks = 90;       // 🌍 Global

// void show() {
//     int age = 20;     // 📍 Local to show()
    
//     cout << marks << endl; // ✅
//     cout << age << endl;   // ✅
// }

// int main() {
//     cout << marks << endl; // ✅
//     // cout << age;        // ❌
// }



// 🧱 1.3 Subtopic — Block Scope

// A block is anything inside { }.

// For example:

// if (true) {
//     int x = 10;
// }

// x exists only inside those { }.





#include <iostream>
using namespace std;

int main() {

    int a = 5;

    if (a > 0) {
        int b = 10;

        cout << a << endl;  // ✅
        cout << b << endl;  // ✅
    }

    cout << a << endl;      // ✅
    // cout << b << endl;   // ❌

    return 0;
}



// main()
// │
// │  a = 5 ✅
// │
// ├── if block { }
// │      │
// │      └── b = 10 ✅
// │
// │  a = 5 ✅
// │  b ❌


// 🔥 Important

// Block scope applies to:

// if
// else
// for
// while
// standalone { }



// 🎯 1.4 Subtopic — Function Parameter Scope

// A parameter is a variable declared inside a function's parameter list.

// Example:

// void add(int a, int b) {
//     cout << a + b;
// }

// Here:

// void add( int a, int b )
//            ↑      ↑
//        parameters

// a and b can be used inside add().

// void add(int a, int b) {

//     cout << a;  // ✅
//     cout << b;  // ✅
// }

// But they don't exist inside main():

// int main() {

//     cout << a;  // ❌
// }



// void add(int a, int b)
// │
// ├── a ✅
// ├── b ✅
// │
// └── function ends
//        ↓
//    a and b's scope ends