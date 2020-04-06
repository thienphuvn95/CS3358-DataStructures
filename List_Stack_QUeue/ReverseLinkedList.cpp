#include <iostream>

struct Node {
    int val;
    struct Node * next;
    Node (int val){
       this->val=val;
       next=NULL;
    }
};
struct LinkedList {
   Node *head;
   LinkedList(){
      head=NULL;
   }
   Node* reverseList(Node* head){
   // Try to implement an iterative and recursive version
      if (head == NULL || head->next == NULL) 
            return head; 
      Node* rest = reverseList(head->next); 
      head->next->next = head;
      head->next = NULL;
      return rest;  
   }
   void print(){
      struct Node* temp =head;
      while (temp !=NULL){
         std::cout<<temp->val<<" ";
         temp=temp->next;
      }
   }
   void push(int val){
      Node *temp= new Node(val);
      temp->next=head;
      head=temp;
   }
};      
int main(){

    // Create the linked list ( doesn't have to be in main, if you want to make another function you can ).
   LinkedList ll;
   int nums;
   while (std::cin>>nums){
      ll.push(nums);
   }
   ll.print();
    // Call reverseList() on the list.
   ll.head=ll.reverseList(ll.head);
    // Print out the contents of the list
   return 0;
}
