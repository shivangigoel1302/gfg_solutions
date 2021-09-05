vector<int> inOrder(Node* root)
{
    //code here
    stack<pair<Node*,int>>s;
    s.push({root,1});
    vector<int>ans;
    while(!s.empty()){
        auto x = s.top();
        s.pop();
        if(x.first == NULL){
            continue;
        }
        else if(x.second == 2){
            ans.push_back(x.first->data);
        }
        else{
            s.push({x.first->right,1});
            s.push({x.first,2});
            s.push({x.first->left,1});
        }
    }
    return ans;
}
