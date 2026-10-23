// 7.3 Access Modifiers 🔐



// acces modifiers control who can acces the data and functions
//  inside a classs


// 🔓 public
// 🔒 private
// 🛡️ protected



//              CLASS
//         ┌───────────────┐
//         │               │
// public  │ 🚪 Open door  │ → accessible from outside
//         │               │
// private │ 🔒 Locked     │ → only class itself
//         │               │
// protected│ 🛡️ Special  │ → class + child classes
//         │               │
//         └───────────────┘



// 🔓 1. public

// Anything under public: can be accessed from outside the class.

// class Student {
// public:
//     string name;
//     int marks;
// };

// it is allowed

class Student {
private:
    int marks;

public:
    void setMarks(int marks) {
        this->marks = marks;
    }
};

// For a class, if you don't write an access modifier, members are private by default



// 🟠 7.3 Access Modifiers — Part 2
// 🔒 private in Real OOP

#include <iostream>
using namespace std;

class BankAccount {

private:
    int balance;

public:
    void setBalance(int amount) {
        if (amount >= 0) {
            balance = amount;
        }
    }

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount account;

    account.setBalance(5000);
    account.displayBalance();

    return 0;
}

// main()
//   ↓
// setBalance(5000)
//   ↓
// 🔒 private balance
//   ↓
// displayBalance()

class Parent {
protected:
    int marks;
};


// Parent
//   │
//   └── protected marks
//           ↓
//       Child class
//           ↓
//        ✅ can use


// | Modifier    | Inside class | Outside | Child class |
// | ----------- | ------------ | ------- | ----------- |
// | `public`    | ✅            | ✅       | ✅           |
// | `protected` | ✅            | ❌       | ✅           |
// | `private`   | ✅            | ❌       | ❌*          |
