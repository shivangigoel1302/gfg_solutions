int search(int in[],int s, int e,int target){
    for(int i = s; i<=e; i++){
        if(in[i] == target){
            return i;
        }
    }
    return -1;
}
int *extract(int in[], int level[],int s,int e,int n){
    int *newlevel = new int[e-s+1];
    int j = 0;
    for(int i = 0 ; i < n ; i++){
        if(search(in,s,e,level[i]) != -1){
            newlevel[j++] = level[i];
        }
    }
    return newlevel;
}
Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n)
{

        if(iStart > iEnd){
            return NULL;
        }
        Node* root = new Node(levelOrder[0]);
        if(iStart == iEnd){
            return root;
        }
        int index = search(inorder,iStart,iEnd,levelOrder[0]);
        int *llevel = extract(inorder,levelOrder,iStart,index-1,n);
        int *rlevel = extract(inorder,levelOrder,index+1,iEnd,n);
        root->left = buildTree(inorder,llevel,iStart,index-1,index - iStart);
        root->right = buildTree(inorder,rlevel,index+1,iEnd,iEnd - index);
        delete[] llevel;
        delete[] rlevel;
        return root;
}
