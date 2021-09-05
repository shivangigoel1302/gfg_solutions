vector<int> preOrder(Node* root)
{
    //code here
    stack<Node*>s;
    s.push(root);
    vector<int>ans;
    while(!s.empty()){
        Node* x = s.top();
        s.pop();
        ans.push_back(x->data);
        if(x->right){
            s.push(x->right);
        }
        if(x->left){
            s.push(x->left);
        }
    }
    return ans;
}
