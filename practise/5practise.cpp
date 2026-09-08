// int arr[7] = {12, 5, 19, 3, 25, 8, 10};

// Find the average of the numbers.

#include <iostream>
using namespace std;

int main(){
    int arr[7] = {12, 5, 19, 3, 25, 8, 10};
    int avg = 0;
    int sum = 0;
        
    for (int i = 0 ; i <7;i++ ){
        sum += arr[i];
    }
    avg = sum/7;
    cout<< avg <<endl;



}

    


