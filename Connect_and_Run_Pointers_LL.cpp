/****************************************************************

      
        
        For example if you want tpo segregate odd nodes and even nodes in a linked list this is how you do it.
        PS: 
        REVISE IT   !!!!!!!!!!!!!!!!!!!!!!!!!
        REVISE IT  !!!!!!!!!!!!!!!!!!!!!!!!!!
        VERY IMPORTANT !!!!!!!!!!!!!!!!!!!!!!
        LEARN HOW TO DO IT !!!!!!!!!!!
        
        
        
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };
        
  

*****************************************************************/

Node * segregateOddEven (Node * head){
    Node* start=NULL;
    Node* end=NULL;
    Node* c1;
    Node *c2;
    Node* temp=head;
    while(temp!=NULL){
        Node *pemp=new Node(temp->data);
        if((temp->data)%2){
            if(start==NULL){
                start=pemp;
                c1=start;}
            else{
            c1->next=pemp;
            c1=pemp;}
        }
        else{
            if(end==NULL){
                end=pemp;
                c2=end;}
            else{
            c2->next=pemp;
            c2=pemp;}
        }
        temp=temp->next;
    }
    if(start==NULL)
    return end;
    if(end==NULL)
        return start;
    c1->next=end;
    return start;
}
