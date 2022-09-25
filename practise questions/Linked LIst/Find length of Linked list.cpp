/* this ques also handles the case when there is self loop of 1 node only*/


int countNodesinLoop(struct Node *head)
{
    Node *fast, *slow;
    fast = slow = head;
    
    Node* loop = NULL;
    
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            loop = fast;
            break;
        }
    }
    int c = 0;
    if(!loop) return 0;
    Node *looper = loop;
    while(loop->next != looper){
        c++;
        loop=loop->next;
    }
    return c+1;
}
