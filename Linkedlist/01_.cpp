#include<iostream>
using namespace std;

// what linkedlist have: node & pointer 
class Node{
      public:
      int data; 
      Node* next; 


      Node(int val){
        data = val; 
        next =  nullptr; 
      }
};

// linked_list 

Node* ArrayToLinkedList (int arr[],  int size){
    if(size == 0) return nullptr; 

    Node* head = new Node(arr[0]); 
    Node*temp = head; 

    for(int i = 1; i < size; i++){
       temp->next = new Node(arr[i]); 
       temp = temp->next;
    }

    return head; 

} 

// printing the linkedlist
void PrintList(Node*head){
   while(head != NULL){
      cout << head->data << "->"; 
      head = head->next;
   }
   
   cout << "NULL";
} 

// removing duplicates from the linkedist(sorted) and printing 
void removeDuplicates(int arr[], int size){
    Node*head = new Node(arr[0]);
    Node*temp = head; 
    Node*next = head->next;  
}


// slow and fast pointer concept 
// finding middle of the element 
Node* middleELement(int arr[], int size){
    Node*head = new Node(arr[0]);
    
    Node*temp = head; 
    for(int i = 1; i < size; i++){
       temp->next = new Node(arr[i]); 
       temp = temp->next;
    }

    Node*slow = head; 
    Node*fast = head; 
    
    while(fast!= NULL && fast->next != NULL){
        slow = slow->next; // slow move by 1
        fast = fast->next->next; // fast move by 2
    } 

      return slow; 
    
}


// detecting cycle in a linkedlist / creating a cycle in a linkedlist  




int main(){

int arr[] = {1,2,3,4,5,6,7,8,9}; 

int size = sizeof(arr) / sizeof(arr[0]); 

int val = arr[0]; 

Node* head = ArrayToLinkedList(arr, size);

PrintList(head); 

removeDuplicates(arr, size); 

cout << endl; 

Node*middle = middleELement(arr, size); 

cout << "the middle element is: "<< middle->data; 

return 0; 
}