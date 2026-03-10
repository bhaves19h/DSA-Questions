// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* reverseList(Node* head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){

        Node* next = curr->next;

        curr->next = prev;

        prev = curr;

        curr = next;
    }
    

    return prev;
    }
    
    void printList(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertatEnd(Node* &head, int val){

    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}
int main(){
    int n;
    cout<<"enter the num: ";
    cin>>n;
    Node* head = NULL;
    
    while(n > 0){
        int x;
        cin>>x;
        insertatEnd(head,x);
        n--;
    }

    cout<<"original list ";
    printList(head);
    head = reverseList(head);
    cout<<"reverse ";
    printList(head);

}
