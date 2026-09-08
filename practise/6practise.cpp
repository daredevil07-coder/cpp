// Write a C++ function called:

// multiply

// It should:

// accept two integers
// multiply them
// return the result

// Then in main() call it with:

// 6 and 7

// and print the result.

// Expected output:

// 42

#include <iostream>
using namespace std;

int mul(int a, int b){
    return a * b;

}
int main(){
    int result = mul(6,7);
    cout<< result << endl;
    return 0;
}