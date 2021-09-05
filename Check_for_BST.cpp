bool checkBST(Node* root, int minimum, int maximum){
    if(root == NULL){
        return true;
    }
    if(root->data < maximum && root->data > minimum && checkBST(root->left,minimum,root->data) && checkBST(root->right,root->data,maximum)){
        return true;
    }
    return false;
}
// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    // Your code here
    return checkBST(root,INT_MIN,INT_MAX);
}
