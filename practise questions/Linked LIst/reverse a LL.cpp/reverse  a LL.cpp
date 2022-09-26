//recursively

struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(!head or !head->next){
            return head;
        }
        
        Node* newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
        
    }
