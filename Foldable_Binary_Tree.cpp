bool helper(Node* lhead,Node* rhead){
    if(!lhead && !rhead){
        return true;
    }
    if(!lhead || !rhead){

        return false;
    }

    bool l = helper(lhead->left,rhead->right);
    bool r = helper(lhead->right,rhead->left);
    return l && r;
}

bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root == NULL){
        return true;
    }
    return helper(root->left,root->right);
}
