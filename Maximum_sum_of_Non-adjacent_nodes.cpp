pair<int,int>getsum(Node*root){
    if(root == NULL){
        return {0,0};
    }
    auto l = getsum(root->left);
    auto r = getsum(root->right);
    int include = max(l.first,l.second) + max(r.first,r.second);
    int exclude = l.second + r.second + root->data;

    return {exclude,include};
}
int getMaxSum(Node *root)
{
    // Add your code here

    auto ans = getsum(root);
    return max(ans.first,ans.second);
}
