// 🏁 POINTER CHAPTER CHECKPOINT

// You've now completed the planned Chapter 5 — Pointers. 🎉

// 5.1  Memory & addresses              ✅
// 5.2  & operator                      ✅
// 5.3  Pointer declaration             ✅
// 5.4  * dereferencing                 ✅
// 5.5  Modify through pointer          ✅
// 5.6  nullptr                         ✅
// 5.7  References                      ✅
// 5.8  Pointer vs reference            ✅
// 5.9  Pointer arithmetic              ✅
// 5.10 Pointer + arrays                ✅
// 5.11 Pointer traversal               ✅
// 5.12 Pointer to pointer              ✅
// 5.13 Pointers + functions            ✅
// 5.14 Pointers + strings              ✅
// 5.15 Dynamic memory                  ✅
// 5.16 delete                          ✅
// 5.17 Dangling pointers               ✅
// 5.18 Memory leaks                    ✅
// 5.19 new[] / delete[]                ✅
// 5.20 const with pointers             ✅
// 5.20 void pointers                   ✅



// 🚀 C++ Lesson 5 — POINTERS

// 1️⃣ First: What is memory?
// memory the use of pointer we know variable has a memory location it is 
// like a box where we can can store something 
// but also memory location has a address



// 2️⃣ The & operator


// & 
// it is used to asked what is the memory location of the variable

// age
//  ↓
// ┌──────────┐
// │    20    │
// └──────────┘
//      ↑
//      │
//     &age
//      │
//      ↓
//  memory address

// 3️⃣ Two symbols

// & → "Give me the address"
// * → "Give me what's stored at this address"

// 4️⃣ syntax

// int* ptr;

// int age = 20;
// int* ptr = &age;



#include <iostream>
using namespace std;

int main() {
    int x = 50;
    int* p = &x;


    return 0;
}
// OUTPUT: 50

// x → 50
// p → address of x
// *p → 50 (go to that address and get the value)


// &x  → address of x
//  p  → stores that address
// *p  → value at that address

// &  → address
// *  → value at address


// 🚀 Next: Pointer + Array


int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr; // or int* p = &arr[0];

   cout<< *(p+1) <<endl; // 20
   cout<< *(p+2) <<endl; // 30
   cout<< *(p+3) <<endl; // 40
   cout<< *(p+4) <<endl; // 50

    return 0;
}

int main(){
    int arr[4] = {10, 20, 30, 40};

    int* p = arr;

    cout << *p << endl;

    p++;

    cout << *p << endl;

    p++;

    cout << *p << endl;
}

// 🚀 Next: Pointer + Function

// This is where your previous lesson about pass by reference connects directly to pointers




void change(int* p) {
    *p = 100;
}

int main() {
    int x = 10;

    change(&x);

    cout << x;
}

// x
// ↓
// ┌───────┐
// │  10   │
// └───────┘
//    ↑
//    │ &x
//    │
//    p


// INSIDE THE FUNCTION (*p = 100)
// it means go to the address stored in p and change the value at that address to 100
void change(int* p) {
    *p = 500;
}

int main() {
    int x = 20;

    change(&x);

    cout << x;
}

// main                    function

// x → ┌─────┐
//     │  20 │
//     └─────┘
//        ↑
//        │ address
//        │
//        p
//        ↓
//     *p = 500

// x → ┌─────┐
//     │ 500 │
//     └─────┘


// int* p     → declaring a pointer  p is a pointer.
// *p         → dereferencing a pointer  = Go to the address stored in p and access the value.


// 🔥 Now something important: changing the pointer


int main(){
    int a = 10;
    int b = 50;

    int* p = &a;

    cout << *p << endl;

    p = &b;

    cout << *p;
}

// output:
// 10,50



// 🚀 Next: nullptr


// wild pointer is a pointer that points to some random memory location. It can cause undefined behavior if dereferenced.


// if we havnot initialise a pointer ten it is a wild pointer 



// e want a pointer that currently points to nothing.

int main() {
    int* p = nullptr; // or int* p = NULL;

    if (p == nullptr) {
        cout << "p is a null pointer." << endl;
    } else {
        cout << "p is not a null pointer." << endl;
    }

    return 0;
}

// 🔹🚀 Topic 5.9 — Pointer vs Reference

// int* p = &x;

// int &r = x;

// They can both be used to access/modify the original variable, but they are NOT the same thing.




// REFERENCE

// x ──┐
//     ├──→ [20]
// r ──┘


// POINTER

// p ─────→ address ─────→ [20]
//                          x




// 🧠 THIS IS THE ONE THING I WANT YOU TO REMEMBER
// Reference:
// REFERENCE
//     ↓
// "Another name for the same variable."

// It cannot be redirected.

// Pointer:
// POINTER
//     ↓
// "Stores the address of a variable."

// It can be redirected.



            //      REFERENCE              POINTER
            //         │                     │
            //         ↓                     ↓
            //   another name          stores address
            //         │                     │
            //         ↓                     ↓
            //    int &r = a          int* p = &a
            //         │                     │
            //         ↓                     ↓
            //   r = 50                *p = 50
            //         │                     │
            //         ↓                     ↓
            //   changes a             changes a
            //                               │
            //                               ↓
            //                         p = &b
            //                               │
            //                               ↓
            //                         now points to b









        //    🚀  🔹 Topic 5.10 — Pointer Arithmetic

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int* p = arr; // or int* p = &arr[0];

    cout << *p << endl; // 10

    p++; // move to the next element
    cout << *p << endl; // 20

    p++; // move to the next element
    cout << *p << endl; // 30

    p--; // move back to the previous element
    cout << *p << endl; // 20

    return 0;
}


// p++       → next element
// p--       → previous element
// p + n     → n elements forward
// p - n     → n elements backward
// *(p + n)  → value n positions forward

// 🔹🚀 Topic 5.11 — Pointer + Array Traversal

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int* p = arr; // or int* p = &arr[0];

    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << endl;
    }

    return 0;
}
// output:
// 10
// 20
// 30
// 40
// 50



// 🔹 🚀  Topic 5.12 — Pointer to Pointer (**)

int** pp;

// he idea is actually simple: a pointer that stores the address of another pointer.



// Now create a pointer to p

// We can do:

// int** pp = &p;

// Read it from right to left:

// &p  → address of p
// pp  → stores that address

// Now we have:

// pp
//  ↓
// ┌────────────────┐
// │ address of p   │
// └────────────────┘
//         │
//         ↓
//        p
//        ↓
//    ┌──────┐
//    │ addr │
//    └──────┘
//         │
//         ↓
//    ┌──────┐
//    │  10  │
//    └──────┘
//        x

// So we have:

// x → value
// p → address of x
// pp → address of p


// 🟡 Part 2 — Changing the original value

int main() {
    int x = 10;
    int* p = &x;
    int** pp = &p;

    **pp = 100; // Change the value of x through pp

    cout << x; // Output: 100

    return 0;
}

// 🔹🚀 Topic 5.13 — Pointers + Functions (Deeper)

// why?
// bcuz take a example when we use to swap values we just get the copies of it
// but when we use this we can actually swap the value 


    void change(int* p) {
    *p = 200;
}

int main() {
    int num = 25;

    change(&num);

    cout << num;
}


void swapValues(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 10;
    int b = 20;

    swapValues(&a, &b);

    cout << a << " " << b;
}

// 🔹🚀 Topic 5.14 — Pointers + Strings

int main(){
    string word = "HELLO";

char* p = &word[0];

p++;
p++;

cout << *p;

}
// output: L


// 🟡Part 2 — Traversing a string with a pointer

int main(){
    string word = "HELLO";

char* p = &word[0];

for(int i = 0; i < word.length(); i++) {
    cout << *(p + i);
}
}

// 🔹 Topic 5.15 — Dynamic Memory

// "I need memory while the program is running."

// That's called dynamic memory allocation.

// int* p = new int;

// we're saying:

// "C++, give me a new memory location capable of storing an int."

// C++ gives us an address.

// 🔥 new = ask for memory




// Part 2 — new with a value

int* p = new int(75);

// This means:

// Create dynamic memory for an int and immediately put 75 inside it.

// dlete is used when we want to delete the memory that we have created using ne

int main() {
    int* p = new int(75);

cout << *p;

    delete p;
    return 0;
}

// 🔹 Topic 5.17 — Dangling Pointers

int* p = new int(50);

// delete p;
// After delete p, the memory is released, but p still holds the old address.
// After delete:

// p
// ↓
// ❌ memory no longer belongs to you

// p is now a dangling pointer.


// 🔹 Topic 5.18 — Memory Leaks 🧠

// A memory leak happens when you use new to allocate memory but forget to release it with delete.



// 🧠 Very important difference
// DANGLING POINTER
// new → delete → pointer still holds old address

// MEMORY LEAK
// new → lose the address without delete



// 🔹 Topic 5.19 — new[] and delete[]

// But what if we want a dynamic array?


// 🔥 Why dynamic arrays matter

// A normal array has a fixed size:

int arr[5];

// You decide the size while writing the program.

// With dynamic allocation:

int main (){int n;
cin >> n;

int* arr = new int[n];
}
// The user can decide the size while the program is running.

// 🔹 Topic 5.20 — const with Pointers


const int* p;
int* const p;
const int* const p;

// here every thing is diffrent 

// 🔵 Case 1 — const int* p
// const int* p = &x;

// Read it as:

// The value I'm pointing to is constant through this pointer.

// So this is NOT allowed:

// *p = 20;   // ❌

// Because you're trying to change the value through p.

// But you can change where p points:

// const int* p

// ❌ Change value through p
// ✅ Change where p points


// 🔴 Case 2 — int* const p

// Now the const is in a different place:

// int* const p = &x;

// This means:

// The pointer itself is constant.

// int* const p

// ✅ Change value
// ❌ Change where p points


// 🟣 Case 3 — const int* const p

// Both are locked:

// const int* const p = &x;

// Therefore:

// *p = 20;   // ❌
// p = &y;    // ❌
// const int* const p

// ❌ Change value
// ❌ Change pointer

// | Syntax               | Value           | Pointer         |
// | -------------------- | --------------- | --------------- |
// | `const int* p`       | 🔒 Can't change | ✅ Can change    |
// | `int* const p`       | ✅ Can change    | 🔒 Can't change |
// | `const int* const p` | 🔒 Can't change | 🔒 Can't change |





// void pointer


// a void can store the address of an object of diffrent types but it does not carry the 
// ponted to type info needed  to normal derefrencing



// void *vp = &c; #c is type of integer and vp is a void pointer it can store the address of c but we cannot derefrence it
// cout << *vp; // this is not allowed we cannot derefrence a void pointer

// cout << *(static_cast<int*>(vp)); // this is allowed we can derefrence a 
// void pointer by type casting it to the type of the object it is pointing to


// // when we dont know upcoming data type we can use void pointer to store
//  the address of that object and then we can type cast it to
//   the type of the object it is pointing to and then derefrence it



// 🔹 Topic 5.21 — class


class car{
    public:
    string brand;
    void start(){
        cout << "Car started" << endl;
    }
};

int main (){
    int x = 10;
    int *p = &x;
    car c;
    car* cp = &c;
    return 0;
}
// normal 

class car{
    public:
    void start(){
        
    }
};