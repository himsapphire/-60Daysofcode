Node* reverseDLL(Node * head)
{
    //Your code here
    Node* temp=head;
    Node* n;
    while(temp->next){
        n=temp->next;
        temp->next=temp->prev;
        temp->prev=n;
        temp=n;
    }
    
    //for the case when there is only one node, or to handle when temp has reached last node
    temp->next=temp->prev;
    temp->prev=NULL;
    head=temp;
    return head;
    
}
