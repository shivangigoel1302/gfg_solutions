Node* deleteNode(Node* root, int k)
    {
        //Your code here
        if(root == NULL){
            return NULL;
        }
        if(root->data == k){
            return root->left;
        }
        if(root->data > k){
            return deleteNode(root->left,k);
        }
        else{
            root->right = deleteNode(root->right,k);
        }
        return root;
    }
