void insertinll(Node* &root,Node*&tail,int x){
    if(root == NULL){
        Node* n = new Node(x);
        root = n;
        tail = n;
        return;
    }
    Node* n = new Node(x);
    n->data = x;
    tail->next = n;
    tail = n;
    return;
}
struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int>s;
    Node* root = NULL;
    Node* tail = NULL;
    Node* temp = head1;
    while(temp != NULL){
        if(s.find(temp->data) == s.end()){

            s.insert(temp->data);
        }
        temp = temp->next;
    }
    temp = head2;
    while(temp != NULL){
        if(s.find(temp->data) == s.end()){

            s.insert(temp->data);
        }
        temp = temp->next;
    }
    auto it = s.begin();
    while(it != s.end()){
        insertinll(root,tail,*it);
        it++;
    }
    return root;
}
