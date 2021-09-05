void distance(vector<int>&ans,Node* root,int k){
    if(root == NULL){
        return;
    }
    if(k == 0){
        ans.push_back(root->data);
        return;
    }
    distance(ans,root->left,k-1);
    distance(ans,root->right,k-1);
    return;
}
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
   vector<int>ans;
   distance(ans,root,k);
   return ans;
}
