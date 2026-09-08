// Find the sum of all elements

// Given:

// int arr[6] = {15, 8, 22, 3, 17, 10};

#include <iostream>
using namespace std;

int main(){
    int arr[6] = {15, 8, 22, 3, 17, 10};

    int sum = 0;
    for (int i = 0 ; i <6;i++ ){
        sum += arr[i];
    }

    cout << sum;

    return 0;
}