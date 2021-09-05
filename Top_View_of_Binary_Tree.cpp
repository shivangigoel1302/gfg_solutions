void findtop(map<int,pair<int,int>>&m, Node* root,int c,int h){
    if(root == NULL){
        return;
    }
    if(m.find(c) == m.end()){
        m[c] = {root->data,h};
    }
    else{
        if(m[c].second > h){
            m[c] = {root->data,h};
        }
    }
        findtop(m,root->left,c-1,h+1);
        findtop(m,root->right,c+1,h+1);

}
vector<int> topView(struct Node *root)
{
    //Your code here
    map<int,pair<int,int>>m;
    vector<int>ans;
    findtop(m,root,0,0);
    for(auto it: m){
        ans.push_back(it.second.first);
    }
    return ans;
}
