// int arr[5] = {10, 25, 7, 40, 15};

// Write a complete C++ program that finds and prints the largest number.

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10, 25, 7, 40, 15};
    int highest = arr[0];
    for(int i=1; i <5; i++){
        if(arr[i]>highest){
            highest = arr[i];
        }
    }
    cout<< highest;
}
