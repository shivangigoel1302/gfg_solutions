vector<int> diagonal(Node *root)
{
   // your code here
   queue<Node*>parent;
   Node* temp = root;
   vector<int>ans;
   while(temp){
       parent.push(temp);
       ans.push_back(temp->data);
       temp = temp->right;
    }
    while(!parent.empty()){
        auto f = parent.front();
        parent.pop();
        if(f->left){
            Node* t = f->left;
            while(t){
                parent.push(t);
                ans.push_back(t->data);
                t = t->right;
            }
        }
    }
   return ans;
}
