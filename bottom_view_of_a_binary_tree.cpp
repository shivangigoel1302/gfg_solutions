void dfs(Node* root, int c, int h, map<int,pair<int,int>>&m){
    if(root == NULL){
        return;
    }
    if(m.find(c) == m.end()){
        m[c] = {root->data,h};
    }
    else{
        if(m[c].second <= h){
            m[c].second = h;
            m[c].first = root->data;
        }
    }
    dfs(root->left,c-1,h+1,m);
    dfs(root->right,c+1,h+1,m);
    return;
}
vector <int> bottomView(Node *root)
{
   // Your Code Here
map<int,pair<int,int>>m;
vector<int>ans;
dfs(root,0,0,m);
for(auto it: m){
    ans.push_back(it.second.first);
}
return ans;
}
