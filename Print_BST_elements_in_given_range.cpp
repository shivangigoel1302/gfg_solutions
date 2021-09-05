void helper(vector<int>&ans,int l,int r,Node* root){
    if(root == NULL){
        return;
    }
    if(root->data < l){
        helper(ans,l,r,root->right);
        return;
    }
    if(root->data > r){
        helper(ans,l,r,root->left);
        return;
    }
    else{
        ans.push_back(root->data);
        helper(ans,l,r,root->left);
        helper(ans,l,r,root->right);
        return;
    }
}
vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here
  vector<int>ans;
  helper(ans,low,high,root);
  sort(ans.begin(),ans.end());
  return ans;
}
