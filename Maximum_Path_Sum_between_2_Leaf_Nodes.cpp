bool notvalid(Node* root){
    if(root == NULL){
        return true;
    }
    if(!root->left || !root->right){
        return true;
    }
    return false;
}
int findpath(Node* root,int &ans){
    if(root == NULL){
        return 0;
    }
    if(!root->left && !root->right){
        return root->data;
    }
    int l = findpath(root->left,ans);
    int r = findpath(root->right,ans);
    if(notvalid(root)){
        return l + r + root->data;
    }
    ans = max(ans,l+r+root->data);
    return max(root->data+l,root->data+r);
}

int maxPathSum(Node* root)
{
   int ans = INT_MIN;
   findpath(root,ans);
   return ans;
}
