#include <iostream>
#include <forward_list>
#include <bits/stdc++.h>
using namespace std;
// Your custom node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    // 1. Given: A raw custom linked list (5 -> 10 -> 20)
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(20);

    // 2. CONVERSION: Copy data from Node* head into a std::forward_list
    forward_list<int> myList;
    auto it = myList.before_begin(); // Iterator needed to maintain correct order

    Node* current = head;
    while (current != nullptr) {
        it = myList.insert_after(it, current->data);
        current = current->next;
    }

    // 3. NOW you can use .front()!
    cout << "The front element of the STL list is: " << myList.front() << "\n"; // Outputs: 5
    myList.pop_front();
    cout<<myList.front();
    myList.reverse();
    int sum = accumulate(myList.begin() , myList.end(),0);
    cout<<" sum: "<<sum;
    for(auto& x: myList){
        cout<<" "<<x<<" ";
    }

    return 0;
}
