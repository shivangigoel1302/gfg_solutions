void convertDll(Node* root,Node*&head,Node* &prev){
        if(root == NULL){
            return;
        }

        convertDll(root->left,head,prev);
        if(prev == NULL){
            head = root;
        }
        else{
            root->left = prev;
            prev->right = root;

        }
        prev = root;
        convertDll(root->right,head,prev);
    }
    Node * bToDLL(Node *root)
    {
        // your code here
        Node* head = NULL;
        Node* prev = NULL;
        convertDll(root,head,prev);
        return head;
    }
