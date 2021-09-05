 public:
    //Function to rotate a linked list.
    int length(Node* head){
        int cnt = 0;
        Node* temp = head;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    Node* rotate(Node* head, int k)
    {
        // Your code here
        int l = length(head);
        k%= l;
        if(k == 0){
            return head;
        }
        Node* prev = NULL;
        Node* temp = head;
        while(k--){
            prev = temp;
            temp = temp->next;
        }
       Node* tail = temp;
       while(tail->next){
           tail = tail->next;
       }
       tail->next = head;
       prev->next = NULL;
       head = temp;
       return head;
    }
