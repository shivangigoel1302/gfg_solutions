 Node* kthSmallest(Node* root, int& k)
{
    // base case
    if (root == NULL)
        return NULL;

    // search in left subtree
    Node* left = kthSmallest(root->left, k);

    // if k'th smallest is found in left subtree, return it
    if (left != NULL)
        return left;

    // if current element is k'th smallest, return it
    k--;
    if (k == 0)
        return root;

    // else search in right subtree
    return kthSmallest(root->right, k);
}

    void inorder(int &cnt,Node* root){
        if(!root){
            return;
        }
        inorder(cnt,root->left);
        cnt++;
        inorder(cnt,root->right);

    }
    int KthSmallestElement(Node *root, int K)
    {
        //add code here.
        int cnt = 0;
        inorder(cnt,root);
        if(cnt >= K){
            return kthSmallest(root,K)->data;
        }
        else{
            return -1;
        }

    }
