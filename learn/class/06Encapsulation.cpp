// 🟣 Chapter 7 — OOP
// 7.6 Encapsulation — Part 1: What Is Encapsulation?


// Encapsulation = bundling data + functions together
//  and controlling how that data can be accessed.


// 2️⃣ With Encapsulation ✅

// We make the important data private.


// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     double balance;

// public:
//     void deposit(double amount) {
//         if(amount > 0) {
//             balance = balance + amount;
//         }
//     }

//     void displayBalance() {
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main() {
//     // BankAccount account;

//     account.deposit(5000);

//     account.displayBalance();

//     return 0;
// }


// 🔥 The key idea

// Encapsulation is not simply "make variables private."

// The bigger idea is:

// Control access to an object's internal state.

// You decide:

// What can outside code see?
//         ↓
// What can outside code change?
//         ↓
// How can outside code interact with the object?




// 🧩 Encapsulation vs Access Modifier

// This distinction is important for exams/interviews.

// private

// Controls direct access to data.

// public

// Provides the interface through which outside code can interact.

// Encapsulation

// The overall design principle of keeping data and its operations
//  together while controlling access.



// 🟣 7.6 Encapsulation — Part 2: Why Controlled Access Matters

// it matters bcux we cant put any entry in it 



// Setter

// Used when you want to change private data in a controlled way.

// void setMarks(int studentMarks) {
//     marks = studentMarks;
// }


// Getter

// Used when you want to read/return private data.

// int getMarks() {
//     return marks;
// }


// 🟣 7.6 Encapsulation — Part 3: Getter vs Sette



class Student {
private:
    int marks;

public:
    void setMarks(int studentMarks) {
        if(studentMarks >= 0 && studentMarks <= 100) {
            marks = studentMarks;
        }
    }

    int getMarks() {
        return marks;
    }
};
// setMarks() → WRITE ✏️
// s1.setMarks(90);

// You're putting/changing data.

// getMarks() → READ 👀
// int result = s1.getMarks();

// You're taking/reading data

//         PRIVATE
//         marks
//           │
//     ┌─────┴─────┐
//     ↓           ↓
//  setMarks()  getMarks()
//     ↓           ↓
//    WRITE       READ



#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int studentMarks) {
        if(studentMarks >= 0 && studentMarks <= 100) {
            marks = studentMarks;
        }
    }

    int getMarks() {
        return marks;
    }

    void display() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.setMarks(90);

    s1.display();

    int result = s1.getMarks();

    cout << "Returned marks: " << result << endl;

    return 0;
}





// 🟣 7.6 Encapsulation — Part 4: Encapsulation in Real Programs

// 💡 Encapsulation ≠ Just private

// This distinction is worth remembering for exams and interviews.

// private
//   ↓
// One mechanism for restricting access

// Encapsulation
//   ↓
// Larger design principle
//   ↓
// Protect internal state
//   ↓
// Expose controlled operations



// 🟣 7.6 Encapsulation — Part 5: Encapsulation + Constructor


#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double startingBalance) {
        if(startingBalance >= 0) {
            balance = startingBalance;
        } else {
            balance = 0;
        }
    }

    void deposit(double amount) {
        if(amount > 0) {
            balance = balance + amount;
        }
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance = balance - amount;
        }
    }

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(10000);

    account.deposit(2000);
    account.withdraw(3000);

    account.displayBalance();

    return 0;
}




// 🟣 7.6 Encapsulation — Part 6: What Exactly Is Being Encapsulated?




