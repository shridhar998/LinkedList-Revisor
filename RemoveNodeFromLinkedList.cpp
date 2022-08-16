 ListNode* curr=head, *prev=NULL;
    while(curr!=NULL){
       if(/*condition on which you want to delete that node*/)
           prev->next=curr->next;
       else
           prev=curr;
    curr=curr->next;
    }
 return head; // IMPORTANT !!    SEE HOW WE ARE RETURNING head AND NOT curr as it has the address of the pointer.
