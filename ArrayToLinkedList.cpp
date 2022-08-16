
ListNode* build(vector<int> &v,int idx){
        if(idx==v.size())
            return NULL;
        ListNode* temp=new ListNode(v[idx]);
        temp->next=build(v,idx+1);
        return temp;
}
