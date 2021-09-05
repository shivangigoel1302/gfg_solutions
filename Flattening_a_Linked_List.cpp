Node* merge(Node* a,Node* b){
    if(a == NULL && b == NULL){
        return NULL;
    }
    if(!a){
        return b;
    }
    if(!b){
        return a;
    }
    if(a->data < b->data){
        a->bottom = merge(a->bottom,b);
        return a;
    }
    else{
        b->bottom = merge(a,b->bottom);
        return b;
    }
    return NULL;
}
Node* flatll(Node* root, Node* after){
    if(!root->next){
        return root;
    }
    Node* a = flatll(after,after->next);
    return merge(root,a);
}
Node *flatten(Node *root)
{
   // Your code here
   return flatll(root,root->next);
}
