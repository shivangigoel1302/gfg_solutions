int minDepth(Node *root) {
        // Your code here
        if(root == NULL){
            return 0;
        }
        if(!root->left && !root->right){
            return 1;
        }
        int l = INT_MAX,r=INT_MAX;
        if(root->left){
            l = minDepth(root->left);
        }
        if(root->right){
            r = minDepth(root->right);
        }
        return min(l,r)+1;
    }
