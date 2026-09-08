#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;
    if(n <= 0) {
    cout << "Size must be greater than 0";
    return 0;
}

    int* arr = new int[n];

    cout << "Enter numbers: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int highest = *arr;

    for(int i = 1; i < n; i++) {
        if(*(arr + i) > highest) {
            highest = *(arr + i);
        }
    }

    cout << "Highest = " << highest << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}