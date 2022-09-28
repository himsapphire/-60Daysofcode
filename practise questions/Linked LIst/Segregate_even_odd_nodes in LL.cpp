//LEETCODE(in terms of odd- even indexes


ListNode* oddEvenList(ListNode* head) {
    
    if(!head || !head->next) return head;
    ListNode* odd=head;
 ListNode* even=head->next;
 ListNode* evenstart=even;

while(odd->next and even->next){
    odd->next=even->next;
    odd=odd->next;
    
    even->next=odd->next;
    even=even->next;
    
}
    odd->next=evenstart;
    return head;
}


2.//gfg , in terms of odd even node values
  
  
 class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* dodd= new Node(1);
        Node* deven= new Node(2);
        Node* temp=head;
        Node* odd=dodd;
        Node* even=deven;
        while(temp){
            if(temp->data%2!=0)
              {
                  
                  odd->next=temp;
                  odd=odd->next;
              }
            else{
                
                even->next=temp;
                even=even->next;
            }  
            
            
            temp=temp->next;
        }
        odd->next=NULL;
        even->next=dodd->next;
        return deven->next;
        
    }
}; 
