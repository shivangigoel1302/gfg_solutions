public:
    void flatten(Node *root)
    {
        //code here
        Node*m = root;
        while(m){
            if(m->left){
                Node* r = m->right;
                m->right = m->left;
                m->left = NULL;
                Node* temp = m->right;
                while(temp->right){
                    temp = temp->right;
                }
                temp->right = r;
            }
            m = m->right;
        }
        return;
    }
