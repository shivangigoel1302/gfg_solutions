bool checkbalanced(Node* root, int &height){
    int lh =0,rh = 0;
    if(root == NULL){
        height = 0;
        return true;
    }
    int l = checkbalanced(root->left,lh);
    int r = checkbalanced(root->right,rh);
    height = (lh > rh ? lh: rh) + 1;
    if(abs(lh-rh) >= 2){
        return false;
    }
    return (l && r);
}
bool isBalanced(Node *root)
{
    //  Your Code here
    int height = 0;
    return checkbalanced(root,height);
}
