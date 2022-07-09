    ListNode* insert(ListNode* head,int ele){
        ListNode* temp=new ListNode(ele);
        temp->next=head;
        head=temp;
        return head;
    }
    ListNode* arrtoList(vector<int> v){
        int n=v.size();
        ListNode* head = NULL; 
        for (int i = n - 1; i >= 0 ; i--) 
            head = insert(head, v[i]); 
        return head;
    }
