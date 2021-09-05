int count(int &ans, Node* root, int x){
    if(root == NULL){
        return 0;
    }
    int l = count(ans,root->left,x);
    int r = count(ans,root->right,x);
    if(l + r + root->data == x){
        ans++;
    }
    return l + r + root->data;
}
int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int ans = 0;
	count(ans,root,X);
	return ans;
}
