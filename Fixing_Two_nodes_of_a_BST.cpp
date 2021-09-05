void checkBst(Node* root,Node*&first,Node*&middle,Node*&last,Node*&prev){
        if(root == NULL){
            return;
        }
        checkBst(root->left,first,middle,last,prev);
        if(prev){
            if(root->data < prev->data){
                if(!first){
                    first = root;
                    middle = prev;
                }
                else{
                    last = root;
                }
            }
        }
        prev = root;
        checkBst(root->right,first,middle,last,prev);
    }
    void correctBST( struct Node* &root )
    {
        // add code here.
        Node* first=NULL,*middle=NULL,*last=NULL;
        Node* prev = NULL;
        checkBst(root,first,middle,last,prev);
        if(first && last){
            swap(first->data,last->data);
            return;
        }
        swap(first->data,middle->data);
    }
