Node* deleteMid(Node* head)
{
    // Your Code Here
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* prev = NULL;
    Node* fast = head;
    Node* slow = head;
    while(fast && fast->next){
        fast = fast->next->next;
        prev = slow;
        slow=slow->next;
    }
    prev->next = slow->next;
    delete slow;
    return head;
}
