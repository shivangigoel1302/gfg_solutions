void difference(int &ans, Node* root, int k){
    if(root == NULL){
        return;
    }
    ans = min(ans, abs(root->data - k));
    if(root->data > k ){
        difference(ans,root->left,k );
    }
    else if(root->data < k){
        difference(ans,root->right,k);
    }
    else{
        ans = 0;
    }
}
int minDiff(Node *root, int K)
{
    //Your code here
    int ans = INT_MAX;
    difference(ans,root,K);
    return ans;
}
