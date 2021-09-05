void convert(Node* root, int &prev){
    if(root == NULL){
        return;
    }
    convert(root->right,prev);
    root->data = root->data += prev;
    prev = root->data;
    convert(root->left,prev);
}

Node* modify(Node *root)
{
    // Your code here
    int prev;
    convert(root,prev);
    return root;
}
