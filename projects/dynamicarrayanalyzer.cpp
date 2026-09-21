// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter size: ";
//     cin >> n;
//     if(n <= 0) {
//     cout << "Size must be greater than 0";
//     return 0;
// }

//     int* arr = new int[n];

//     cout << "Enter numbers: ";

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int highest = *arr;

//     for(int i = 1; i < n; i++) {
//         if(*(arr + i) > highest) {
//             highest = *(arr + i);
//         }
//     }

//     cout << "Highest = " << highest << endl;

//     delete[] arr;
//     arr = nullptr;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct node{
//     int data;
//     node* next;
    
// };

// int main(){
//     node*head=new node;
//     node*second=new node;
//     node*third=new node;

//     head->data=10;
//     second->data=20;
//     third->data=30;

//     head->next=second;
//     second->next=third;
//     third->next= nullptr;

//     node* temp = head;

    
//     do {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != head);

//     return 0;
// }


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    // Store data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = head;

    // Circular traversal
    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    return 0;
}