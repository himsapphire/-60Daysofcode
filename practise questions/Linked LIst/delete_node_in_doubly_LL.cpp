
Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
  
      //to handle a case when the node to be deleted is first node
      if(x==1){
          head_ref=head_ref->next;
          head_ref->prev=NULL;
          return head_ref;
      }
      
      Node* temp=head_ref;Node* p=head_ref;
      while(x-1){
          p=temp;
          temp=temp->next;
          x--;
      }
      
      p->next=temp->next;
      //need to check if its not the last node
      if(temp->next)
         temp->next->prev=p;
      
      return head_ref;
      
