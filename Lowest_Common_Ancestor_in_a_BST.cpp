if(root==NULL)
        {
            return false;
        }
        int left=lca(root->left,p,q)?1:0;
        int right=lca(root->right,p,q)?1:0;
        int mid=(root==p||root==q)?1:0;
        if(mid+left+right>=2)
        {
            ans=root;
        }
        return (mid+left+right)>0;
