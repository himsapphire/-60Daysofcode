/* this ques also handles the case when there is self loop of 1 node only*/


if(!head or !head->next)
            return 0;
        Node* slow=head;
        Node* fast= head;
        while(fast and fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
              break;
        }
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        int c=1;
        slow=slow->next;
        while(fast!=slow){
            slow=slow->next;
            c++;
        }
        return c;
}
