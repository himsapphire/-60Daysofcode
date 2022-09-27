//1. slow and fast from head(find middle), stop when fast reaches last or second last node
//2.slow->next (reverse)
//3. dummy = head, and slow=slow=>next;
//4 start interating for dummy and slow, until slow ends(very imp)



class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node* head){
        if(!head or !head->next)
           return head;
           
        Node* newhead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(!head or !head->next)
              return true;
              
        Node* slow=head;
        Node* fast=head;
        //if fast reaches last node or second last node
        while(fast->next and fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        Node* dummy=head;
        while(slow){
            if(slow->data==dummy->data)
            {
                slow=slow->next;
                dummy=dummy->next;
            }
            else
              break;
        }
        if(slow)
          return false;
        else
          return true;
        
    }
};
