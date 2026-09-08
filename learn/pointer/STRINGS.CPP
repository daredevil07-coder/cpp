#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "PROGRAMMING";
    cout << word.substr(3, 4);
    return 0;
}

// here we learn how to take a piece of a string using the substr() function. In this example, we have a string "PROGRAMMING" and we are extracting a substring starting from index 3 with a length of 4 characters. The output will be "GRAM".
// start at index 3
// take 4 characters


int main() {
    string word = "Hello World";
    word.erase(5, 1);
    cout << word;
    return 0;
}

// In this example, we are using the erase() function to remove a character from the string. 
        // start at index 5
        // remove 1 character



    // 🚀 String Lesson 4.7 — .insert()


int main() {
    string word = "HelloWorld";
    word.insert(5, " ");
    cout << word;
    return 0;
}

// string.insert(position, text)
// Go to position 5 and insert a space without deleting anything.


// 🚀 String Lesson 4.8 — .replace()


int main(){
    string word = "Hello World";

    word.replace(6, 5, "C++");

    cout << word;
    return 0;
}

// word.replace(6, 5, "C++");
// start at index 6
// remove 5 characters
// put "C++" there


// 🚀 String Lesson 4.9 — Character Function

// isalpha() - checks if a character is an alphabet
// isdigit() - checks if a character is a digit
// isalnum() - checks if a character is alphanumeric
// isupper() - checks if a character is uppercase
// islower() - checks if a character is lowercase
// isspace() - checks if a character is whitespace

int main() {
    char ch = 'A';
    if (isalpha(ch)) {
        cout << ch << " is an alphabet." << endl;
    }
    if (isdigit(ch)) {
        cout << ch << " is a digit." << endl;
    }
    if (isalnum(ch)) {
        cout << ch << " is alphanumeric." << endl;
    }
    if (isupper(ch)) {
        cout << ch << " is uppercase." << endl;
    }
    if (islower(ch)) {
        cout << ch << " is lowercase." << endl;
    }
    if (isspace(ch)) {
        cout << ch << " is whitespace." << endl;
    }
    return 0;
}


// 🚀 String Lesson 4.10 — Traversing a String


int main() {
    string word = "Hello World";
    for (int i = 0; i < word.length(); i++) {
        cout << word[i] << endl;
    }
    return 0;
}
// OUTPUT:
// H
// e
// l
// l
// o

// 🚀 One Last Important String Concept — tolower() / toupper()

// tolower()

// Converts a character to lowercase

// toupper()

// Converts a character to uppercase:

int main() {
    char ch = 'A';
    cout << "Lowercase of " << ch << " is " << (char)tolower(ch) << endl;
    ch = 'a';
    cout << "Uppercase of " << ch << " is " << (char)toupper(ch) << endl;
    return 0;
}


// string
// ├── char vs string                 ✅
// ├── indexing                       ✅
// ├── size() / length()              ✅
// ├── cin >> vs getline()             ✅
// ├── concatenation (+)              ✅
// ├── append()                       ✅
// ├── find()                         ✅
// ├── substr()                       ✅
// ├── erase()                        ✅
// ├── insert()                       ✅
// ├── replace()                      ✅
// ├── isalpha()                      ✅
// ├── isdigit()                      ✅
// ├── isalnum()                      ✅
// ├── isupper() / islower()          ✅
// ├── isspace()                      ✅
// ├── toupper() / tolower()          ✅
// └── traversing with loops          ✅