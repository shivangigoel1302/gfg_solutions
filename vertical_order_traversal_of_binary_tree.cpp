//not showing this as correct but same code on gfg

void findorder(Node* root, int c, int h,map<int,vector<int>>&m ){
    if(root == NULL){
        return;
    }
    m[c].push_back(root->data);
    findorder(root->left,c-1,h+1,m);
    findorder(root->right,c+1,h+1,m);
    return;
}
vector<int> verticalOrder(Node *root)
{
    //Your code here
    map<int,vector<int>>m;
    vector<int>ans;
    findorder(root,0,0,m);
    for(auto it: m){
        auto x = it.second;
        // cout<<"hi"<<" ";
        //sort(x.begin(),x.end(),compare);
        for(auto i : x){
            // cout<<i.first<<" ";
            ans.push_back(i);
        }
    }
    return ans;
}
