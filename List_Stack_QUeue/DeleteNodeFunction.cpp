// Include the necessary header files
#include <iostream>
struct Node {
    int val;
    Node * next;
};

void deleteNode( Node *head, int target ){
   // Traverse the list looking for the target value. 
   // You will need a variable that keeps track of the node prior to the one you are looking at. 
   struct Node* temp=head, *prev;
   if (head->val ==target){
      temp-head;
      head->val=head->next->val;
   }
   if (temp !=NULL && temp->val==target){
      head=temp->next;
      return;
   }
   while (temp!=NULL && temp->val !=target){
      prev=temp;
      temp=temp->next;
   }
   if (temp==NULL)
      return;
   prev->next=temp->next;
}

int main(){
   
   return 0;
}
