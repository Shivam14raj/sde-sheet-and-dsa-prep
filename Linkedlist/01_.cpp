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

// removing duplicates from the linkedist and printing 



int main(){

int arr[] = {1,2,3,4,5,5,6,7,8,9}; 

int size = sizeof(arr) / sizeof(arr[0]); 

int val = arr[0]; 

Node* head = ArrayToLinkedList(arr, size);

PrintList(head); 

return 0; 
}