void findleft(vector<int>&ans, Node* root){
    if(root == NULL){
        return;
    }

  if(root->left){
      ans.push_back(root->data);
      findleft(ans,root->left);
  }
  else if(root->right){
      ans.push_back(root->data);
      findleft(ans,root->right);
  }
}
void findleaf(vector<int>&ans, Node* root){
    if(root == NULL){
        return;
    }
    findleaf(ans,root->left);
    if(!root->left && !root->right){
        ans.push_back(root->data);
    }
    findleaf(ans,root->right);
}
void findright(vector<int>&ans, Node* root){
    if(root == NULL){
        return;
    }

    if(root->right){
        findright(ans,root->right);
        ans.push_back(root->data);

    }
    else if(root->left){
        findright(ans,root->left);
        ans.push_back(root->data);
    }
}
vector <int> printBoundary(Node *root)
{
     //Your code here
     vector<int>ans;
     ans.push_back(root->data);
     findleft(ans,root->left);
     findleaf(ans,root);
     findright(ans,root->right);

     return ans;
}
