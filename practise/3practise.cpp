// Find the smallest number in:

// int arr[6] = {15, 8, 22, 3, 17, 10};

#include <iostream>
using namespace std;
int main(){
    int arr[6] = {15, 8, 22, 3, 17, 10};
    int smallest = arr[0];
      for(int i=1; i < 6; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<< smallest;
}

