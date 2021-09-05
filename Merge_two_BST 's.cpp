void inorder(vector<int>&ans, Node* root){
    if(root == NULL){
        return;
    }
    inorder(ans,root->left);
    ans.push_back(root->data);
    inorder(ans,root->right);
}
vector<int> merge(Node *root1, Node *root2)
{
    vector<int>ans;
   if(root1 == NULL){
       inorder(ans,root2);
       return ans;
   }
   if(root2 == NULL){
       inorder(ans,root1);
       return ans;
   }
   stack<Node*>s1;
   stack<Node*>s2;
   Node* it1 = root1;
   Node*it2 = root2;
   while(it1 || it2 || !s1.empty() || !s2.empty()){
       if(it1 || it2){
           if(it1){
               s1.push(it1);
               it1= it1->left;
           }
           if(it2){
               s2.push(it2);
               it2 = it2->left;
           }
       }
       else{
           if(s1.empty()){
               while(!s2.empty()){
                   it2 = s2.top();
                   it2->left = NULL;
                   inorder(ans,it2);
                   s2.pop();
               }
               return ans;
           }
           if(s2.empty()){
               while(!s1.empty()){
                   it1 = s1.top();
                   it1->left = NULL;
                   inorder(ans,it1);
                   s1.pop();
               }
               return ans;
           }
           it1 = s1.top();
           s1.pop();
           it2 = s2.top();
           s2.pop();
           if(it1->data < it2->data){
               ans.push_back(it1->data);
               it1 = it1->right;
               s2.push(it2);
               it2 = NULL;
           }
           else{
               ans.push_back(it2->data);
               it2 = it2->right;
               s1.push(it1);
               it1 = NULL;
           }
       }
   }
   return ans;
}
