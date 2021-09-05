Node* deletenode(Node* &root, int x){
    if(root == NULL){
        return NULL;
    }
    if(root->data > x){
        deletenode(root->left,x);
    }
    else if(root-> data == x){
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        else if(!root->left){
            Node* r = root->right;
            delete root;
            return r;
        }
        else if(!root->right){
            Node* l = root->left;
            delete root;
            return l;
        }
        else{
            Node* temp = root->right;
            while(temp ->left!= NULL){
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = deletenode(root->right,root->data);
        }
    }
    else if(root->data < x){
        deletenode(root->right,x);
    }
    return root;
}
Node *deleteNode(Node *root,  int X)
{
    // your code goes here
    root = deletenode(root,X);
    return root;
}
