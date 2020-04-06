#include <iostream>
#include <vector>

// DO NOT MODIFY
struct Node {
    int val;
    Node * next;
    Node( int num ){
        val = num;
        next = nullptr;
    }
};

// DO NOT MODIFY
Node * createList( std::vector<int> & vec ){
    int i = 0;
    Node * head = new Node( vec[i++] );
    Node * runner = head;
    for( i; i < vec.size(); i++ ){
        Node * temp = new Node( vec[i] );
        runner->next = temp;
        runner = runner->next;
    }
    return head;
}
Node * printList(Node *node)  {  
    while (node!=NULL)  
    {  
        std::cout<<node->val<<" ";  
        node = node->next;  
    }  
}  
Node * mergeLists(Node * l1, Node * l2) {
   /*
   Create a dummy node. This node can act as the head of your "new" list. Append the that were already created
   to this dummy head. At the end of the function you can return dummyNode->next since your real list will be the 
   node after the dummy head.
   
   Loop through both lists.
      As you loop check the values
      Place the node with the lower value first
      
   Make sure both lists have been searched till the end
   
   Return your merged list
   */
   Node* dummyNode =new Node(0);
   Node* ptr=dummyNode;
   while (l1 && l2){
      if (l1->val <l2->val){
         ptr->next=l1;
         l1=l1->next;
      }
      else{
         ptr->next=l2;
         l2=l2->next;
      }
      ptr=ptr->next;
   }
   if (l1 !=NULL)
      ptr->next=l1;
   else
      ptr->next=l2;
   return dummyNode->next;
   }
    
int main(){
   std::vector<int> list1_values { 1, 3, 5 };
   std::vector<int> list2_values { 2, 3, 4, 6 };
   
   Node * list1 = createList( list1_values );
   Node * list2 = createList( list2_values );
   
   // Save the results from your function
   auto result = mergeLists(list1,list2);
   // Print out the list that was returned from your function, put a space between each integer
   printList(result);
   return 0;
}
