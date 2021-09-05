Node* insert(Node* root, int Key)
{
    // Your code here
    if(root == NULL){
        Node* n = new Node(Key);
        return n;
    }
    if(root->data < Key){
        root->right = insert(root->right,Key);
    }
    if(root->data > Key){
        root->left = insert(root->left,Key);
    }
    return root;
}
