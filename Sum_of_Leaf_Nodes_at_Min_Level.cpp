int minLeafSum(Node *root)
    {
        //code here
        queue<Node*>q;
        q.push(root);
        int ans = 0;
        while(!q.empty()){
            int flag = 0;
            int n = q.size();
            while(n--){
                Node* temp = q.front();
                q.pop();
                if(!temp->left && !temp->right){
                    flag = 1;
                    ans += temp->data;
                    continue;
                }
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            if(flag){
                return ans;
            }
        }
        return ans;
    }
